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
  LeftTurnForTime(60);
  ClawClose();
	FastForwardForTime(100);
	LauncherDown(800);
	ClawOpen();
	wait10Msec(PartTime);
}
