bool speedgood = false;
int speedSetPoint = 0;         //sets the speed


int deadband (int stick)
{
	const int db = 7;
	int astick = abs(stick);
	int ret = 0;
	if(astick > db)
	{
		astick = pow(1.1,astick/1.5);

		if(astick > 127) astick = 127;

		if(stick < 0) astick *= -1;
		ret = astick;
	}
	return ret;
}

void drive(int xmove, int ymove, int yaw)
{

		// Y component, X component, Rotation
		motor[LFmotor] = -ymove - xmove - yaw;
		motor[RFmotor] =  ymove - xmove - yaw;
		motor[RBmotor] =  ymove + xmove - yaw;
		motor[LBmotor] = -ymove + xmove - yaw;
}

void launcher(int speed)
{
	motor[launcher1] = speed;
	motor[launcher2] = speed;
	motor[launcher3] = speed;
	motor[launcher4] = speed;
}


/*
int motorValue = 0;

task PositionControl()
{
	static int minSetting=0;
	long dp;
	int pos;
	int pos_pv=0;
	int error;
  long average=0;
	int PosMaxLimit = 0;               //sets the maximum slingshot speed
	int PosMinLimit = 0;               //sets minimum slingshot



	dp= 0;
	pos = 0;
	pos_pv = SensorValue[Potentiometer];
	average = 0;
	goodcounter = 0;

	while(1)
	{


		pos = SensorValue[Potentiometer];

		dp = pos - pos_pv;
		pos_pv = pos;

		error = PosSetPoint - dp;

		pos_pv = SensorValue[Potentiometer];

		average -= average/16;
		average += dp;
		aspeed = average/16;

			minSetting = PosSetPoint/3;

		if (error < 0)
		{
			motorValue = minSetting;
		}
		else
		{
			motorValue = 127;
		}

		PosMaxLimit = (speedSetPoint + 9);               //sets the maximum slingshot speed
		PosMinLimit = (speedSetPoint - 9);               //sets minimum slingshot
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


	  motor[launcher1] = motorValue;
		motor[launcher2] = motorValue;
		motor[launcher34]  = motorValue;
		motor[launcher5] = motorValue;
		motor[launcher6] = motorValue;


		wait1Msec(50);
	}

}
*/
