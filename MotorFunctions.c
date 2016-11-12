
int limitMotor(int speed)
{
	if(speed > 127)  speed = 127;
	if(speed < -127) speed = -127;
	return speed;
}

void drive(int left, int right)
{
	right = limitMotor(right);
	left = limitMotor(left);

	motor[LFmotor] = left;
	motor[LRmotor] = left;
	motor[RFmotor] = right;
	motor[RRmotor] = right;
}

void launcher(int speed)
{
	speed = limitMotor(speed);

	motor[launcher1]  = speed;
	motor[launcher2]  = speed;
	motor[launcher34] = speed;
	motor[launcher5]  = speed;
	motor[launcher6]  = speed;
}

enum {load,carry,launch,winch} command = get;

void launcherWinch(void)
{
	command = winch;
}
void launcherDownForPickup(void)
{
	command = load;
}
void launcherCarryStar(void)
{
	command = carry;
}
void launcherThrowStar(void)
{
	command = launch;
}

bool doLaunch = false;
bool pidRunning = false;

float  pid_Kp = 2.0;
float  pid_Ki = 0.04;
float  pid_Kd = 0.0;
static float pidRequestedValue;

void launchStateMachine(void)
{
	static enum{idle, preLaunch, launch, launching, reset, carry, load, winch} launchState = reset;

	if(!pidRunning)
	{
		startTask(armController);
	}

	switch(launchState)
	{
			break;
		case idle:
			if(doLaunch) launchState = preLaunch;
			break;
		case preLaunch:
			pidRequestedValue = 160;
			if(position <= pidRequestedValue)
				launchState = launching;
			break;
		case launch:
			if(!doLaunch) launchState = reset;
			// set PID to agressive launching
			pid_Kp = 10.0;
			pid_Ki = 0.00;
			pid_Kd = 0.0;
			// set PID position to launchTerminate Position
			pidRequestedValue = 2000;
			launchState = launching;
			break;
		case launching:
			if(!doLaunch) launchState = reset;
			if(position == launchTerminate)
				launchState = reset;
			break;
		case reset:
			// set PID to position holding
			pid_Kp = 2.0;
			pid_Ki = 0.04;
			pid_Kd = 0.0;
			// set PID position to carry position
			pidRequestedValue = 200;
			launchState = idle;
			break;
		default:
			launchState = reset;
			break;
	}
}

task armController()
{
	long z_states[3];
	int z1,z2,z3;
	long output;

	pidRunning = true;

	z1 = 0;
	z2 = 0;
	z3 = 0;

	while( true )
	{
    // Read the sensor value and scale
    pidSensorCurrentValue = SensorValue[ Potentiometer ];

    // calculate error
    pidError = pidSensorCurrentValue - pidRequestedValue;

		// convert time domain into Z domain
		z1 = pid_Kp + pid_Ki/2 + pid_Kd;
		z2 = -pid_Kd + pid_Ki/2 - 2 * pid_Kd;
		z3 = pid_kd;

    // Z transform
		z_states[2] = z_states[1];
		z_states[1] = s_states[0];
		z_states[0] = pid_Error;

		output += z1 * z_states[0] + z2 * z_states[1] + z3 * z_states[2];

		if(output > OUTPUTMAX) output = OUTPUTMAX;
		if(output < OUTPUTMIN) output = OUTPUTMIN;
		launcher(output/65536);

	  wait1Msec( 25 );
	}
}
