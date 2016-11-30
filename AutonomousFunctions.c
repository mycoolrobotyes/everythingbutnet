const int MainTime = 500;
const int PartTime = 100;

void AllStop(void)
{
	drive(0,0,0);
}

void RightTurnForTime(int time)
{
	drive(0,0,127);
	wait10Msec(time);
	AllStop();
}

void LeftTurnForTime(int time)
{
	drive(0,0,-127);
	wait10Msec(time);
	AllStop();
}

void FastForwardForTime(int time)
{
	drive(0,127,0);
	wait10Msec(time);
	drive(0,0);
}

void FastBackwardsForTime(int time)
{
	drive(0,-127,0);
	wait1Msec(time);
	AllStop();
}

void FastSidewaysForTime(int time)
{
	drive(-127,0,0);
	wait10Msec(time);
	AllStop();
}

void armup(void)
{
  if(SensorValue(Potentiometer1) > 2000)
   {
  	launcher(127);
   }
 }



void armdown(void)
{
while(1)
{
  if(SensorValue(Potentiometer1) < 347)
   {
  	launcher(127);
   }
 }
}
