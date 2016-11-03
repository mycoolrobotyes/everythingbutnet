
void driving(int left, int right)
{
	motor[LFmotor] = left;
	motor[LRmotor] = left;
	motor[RFmotor] = right;
	motor[RRmotor] = right;
}

void launcher(int speed)
{
	motor[launcher1] = speed;
	motor[launcher2] = speed;
	motor[launcher34] = speed;
	motor[launcher5] = speed;
	motor[launcher6] = speed;
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


		wait1Msec(50);
	}
