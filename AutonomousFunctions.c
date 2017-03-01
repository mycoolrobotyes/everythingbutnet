const int MainTime = 200;
const int PartTime = 100;
const int SmallTime = 70;
const int SmallerTime = 45;
const int ClawOpenTime = 500;

void LauncherUp(int time)
{
	launcher(-127);
	wait1Msec(time);
	launcher(0);
}

void LauncherDown(int time)
{
	launcher(127);
	wait1Msec(time);
	launcher(0);
}
void AllStop(void)
{
	drive(0,0);
}

void RightTurnForTime(int time)
{
	drive(127,-127);
	wait10Msec(time);
	AllStop();
}

void LeftTurnForTime(int time)
{
	drive(-127,127);
	wait10Msec(time);
	AllStop();
}

void FastForwardForTime(int time)
{
	drive(127,127);
	wait10Msec(time);
	drive(0,0);
}

void FastBackwardsForTime(int time)
{
	drive(-127,-127);
	wait10Msec(time);
	AllStop();
}


void armup()
{
	if(SensorValue(Potentiometer1) < 4090)
  {
  	launcher(-127);
  }
 }

void armdown()
{
	if(SensorValue(Potentiometer1) > 2160)
  {
  	launcher(127);
  }
}

void armstop()
{
  	launcher(0);

}
void ClawOpen(void)
{
 	motor[Claw1] = -127;
 	motor[Claw2] = -127;
  wait10Msec(280);
 	motor[Claw1] = 0;
 	motor[Claw2] = 0;
}

void Clawletgo(void)
{

 	motor[Claw1] = -127;
 	motor[Claw2] = -127;
  wait10Msec(50);
 	motor[Claw1] = 0;
 	motor[Claw2] = 0;
}
void ClawClose(void)
{
 	motor[Claw1] = 127;
  motor[Claw2] = 127;
	wait10Msec(150);
  motor[Claw1] = 0;
  motor[Claw2] = 0;
}

void ClawClose2(void)
{
  motor[Claw1] = 127;
  motor[Claw2] = 127;
	wait10Msec(40);
  motor[Claw1] = 0;
 	motor[Claw2] = 0;
}

void ClawOpen2(void)
{
 	motor[Claw1] = -127;
 	motor[Claw2] = -127;
	wait10Msec(130);
 	motor[Claw1] = 0;
 	motor[Claw2] = 0;
}
