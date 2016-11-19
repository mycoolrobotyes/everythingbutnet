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
	drive(127,127,0);
	wait10Msec(time);
	AllStop();
}

void FastBackwardsForTime(int time)
{
	drive(-127,-127,0);
	wait10Msec(time);
	AllStop();
}
