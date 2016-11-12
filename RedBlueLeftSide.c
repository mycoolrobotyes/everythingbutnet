const char *RedBlueLeftSideName = "RedBlueLeftSide";

void RedBlueLeftSide(void)
{
	FastForwardForTime(500);
	wait10Msec(PartTime);
	RightTurnForTime(MainTime);
	FastForwardForTime(PartTime);
	launcher(127);
	wait10Msec(300);
	launcher(0);
	LeftTurnForTime(MainTime);
	wait10Msec(10);
	RightTurnForTime(MainTime);
	wait10Msec(10);
}
