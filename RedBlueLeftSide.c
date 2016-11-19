const char *RedBlueLeftSideName = "RedBlueLeftSide";

void RedBlueLeftSide(void)
{
  motor[Claw] = 127;
  wait1Msec(500);
  motor[Claw] = 0;
	FastForwardForTime(150);
	launcher(127);
	wait1Msec(500);
	launcher(0);
	FastBackwardsForTime(10);
	RightTurnForTime(80);
	launcher(127);
	LeftTurnForTime(120);
}
