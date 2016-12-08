//Do Nothing code
const char *autonomous1Name = "simple";

void Autonomous1(void)
{
	FastForwardForTime(78);
	wait10Msec(PartTime);
  RightTurnForTime(SmallerTime);
  FastForwardForTime(60);
  ClawClose();
  armup();
  ClawClose();
  LeftTurnForTime(PartTime);
	FastForwardForTime(SmallTime);
	wait10Msec(700);
	LauncherDown(1000);
}
