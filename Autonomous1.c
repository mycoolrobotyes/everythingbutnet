//Do Nothing code
const char *autonomous1Name = "simple";

void Autonomous1(void)
{
	FastForwardForTime(78);
	wait10Msec(PartTime);
  RightTurnForTime(SmallTime);
  FastForwardForTime(60);
  ClawClose();
  armup();
  ClawClose();
  LeftTurnForTime(PartTime);
	FastForwardForTime(78);
	wait10Msec(PartTime);
	LauncherDown(1000);
}
