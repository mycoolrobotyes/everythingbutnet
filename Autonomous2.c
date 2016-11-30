const char *autonomous2Name = "strategy1";

void Autonomous2(void)
{
	FastForwardForTime(500);
	wait10Msec(PartTime);
	LeftTurnForTime(MainTime);
	FastForwardForTime(PartTime);
	launcher(127);
	wait10Msec(300);
	launcher(0);
	RightTurnForTime(MainTime);
	wait10Msec(10);
	LeftTurnForTime(MainTime);
	wait10Msec(10);
}
