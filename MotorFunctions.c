bool speedgood = false;
bool shooterOn = false;
bool shooterreverse = false;
long aspeed;
int speedSetPoint = 0;         //sets the speed
  int goodcounter;

void driving(int left, int right)
{
	motor[leftMotor] = left;
	motor[leftmotorback] = left;
	motor[rightMotor] = right;
	motor[rightmotorback] = right;
}


void launcherOn()
{
	shooterOn = true;
	speedgood = false;
	shooterreverse = false;
}

void launcherOff()
{
	shooterOn = false;
}

void backwardslauncher()
{
	shooterreverse = true;
}

void setLauncherSpeed(int speed)
{
	if (speed < 0)
		speed = 0;
	speedSetPoint = speed;         //sets the speed
	speedgood = false;
}

int motorValue = 0;

task speedControl()
{
	static int minSetting=0;
	long dp;
	int pos;
	int pos_pv=0;
	int error;
  long average=0;
	int speedMaxLimit = 0;               //sets the maximum slingshot speed
	int speedMinLimit = 0;               //sets minimum slingshot



	dp= 0;
	pos = 0;
	pos_pv = SensorValue[encoder];
	average = 0;
	goodcounter = 0;

	while(1)
	{
		SensorValue[LED] = true;

		pos = SensorValue[encoder];

		dp = pos - pos_pv;
		pos_pv = pos;

		error = speedSetPoint - dp;

		pos_pv = SensorValue[encoder];

		average -= average/16;
		average += dp;
		aspeed = average/16;

			minSetting = speedSetPoint/3;

		if (error < 0)
		{
			motorValue = minSetting;
		}
		else
		{
			motorValue = 127;
		}

		speedMaxLimit = (speedSetPoint + 9);               //sets the maximum slingshot speed
		speedMinLimit = (speedSetPoint - 9);               //sets minimum slingshot

	  if((aspeed < speedMaxLimit) && (aspeed > speedMinLimit))
	  {
	  	goodcounter = 10;
	  }
	  else
	  {
	  	if(goodcounter)
	  		goodcounter --;
	  }

	  if(goodcounter)
	  {
	  speedgood = true;
	  }
	  else
    {
	   speedgood = false;
	  }

		if(motorValue > 127) motorValue = 127;
		if(motorValue <0) motorValue = 0;

		if(shooterOn==false)
		{
			motorValue=0;
		}

	if(shooterreverse==true)
	{
			motorValue=-127;
		}


	  motor[launcher2a] = motorValue;
		motor[launcher2b] = motorValue;
		motor[launcher1]  = motorValue;
	  SensorValue[LED] = false;

		wait1Msec(50);
	}

}
