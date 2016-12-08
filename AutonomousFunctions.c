const int MainTime = 500;
const int PartTime = 100;
const int SmallTime = 60;
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
	launcher(-30);
	wait1Msec(time);
	launcher(0);
}
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

void armup()
{
  if(SensorValue(Potentiometer1) < 2000)
   {
  	launcher(-127);
   }
 }



void armdown()
{
  if(SensorValue(Potentiometer1) > 347)
   {
  	launcher(127);
   }
}

void ClawOpen(void)
{
	motor[Claw] = 127;
  wait1Msec(ClawOpenTime);
  motor[Claw] = 0;
}

void ClawClose(void)
{
	motor[Claw] = 127;
	wait10Msec(140);
	motor[Claw] = 0;
}
