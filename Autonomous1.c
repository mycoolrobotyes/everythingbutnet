const char *autonomous1Name = "simple";

void Autonomous1(void)
{
  motor[Claw] = 127;
  wait1Msec(500);
  motor[Claw] = 0;
	FastForwardForTime(150);
	launcher(127);
	wait1Msec(500);
	launcher(0);
	FastBackwardsForTime(10);
	LeftTurnForTime(80);
	launcher(127);
	RightTurnForTime(120);
}
