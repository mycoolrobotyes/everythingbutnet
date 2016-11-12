const int MainTime = 500;
const int PartTime = 100;

void RightTurnForTime(int time)
{
	drive(127,-127);
	wait10Msec(time);
	drive(0,0);
}

void LeftTurnForTime(int time)
{
	drive(-127,127);
	wait10Msec(time);
	drive(0,0);
}

void FastForwardForTime(int time)
{
	drive(127,127);
	wait10Msec(time);
	drive(0,0);
}

void AllStop(void)
{
	drive(0,0);
}
