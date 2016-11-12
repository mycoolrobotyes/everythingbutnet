const char *RedBlueRightSideName = "RedBlueRightSide";

void RedBlueRightSide(void)
{
	while(1)
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

}
