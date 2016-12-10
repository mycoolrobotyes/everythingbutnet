//Do Nothing code
const char *autonomous1Name = "simple";

void Autonomous1(void)
{
	FastForwardForTime(78);
	wait10Msec(PartTime);
  LeftTurnForTime(60);
  FastForwardForTime(60);
  ClawClose();
  armup();
  ClawClose();
  RightTurnForTime(60);
  ClawClose();
	FastForwardForTime(100);
	LauncherDown(800);
	ClawOpen();
	wait10Msec(PartTime);
}
