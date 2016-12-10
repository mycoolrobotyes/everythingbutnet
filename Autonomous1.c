//Do Nothing code
const char *autonomous1Name = "simple";

void Autonomous1(void)
{
	FastForwardForTime(78);
	wait10Msec(PartTime);
  LeftTurnForTime(60);
  FastForwardForTime(60);
  ClawClose();
  ArmupWithClaw();
  RightTurnForTime(50);
  ClawClose();
	FastForwardForTime(100);
	ClawClose();
	LauncherDown(800);
	ClawOpen();
	wait10Msec(PartTime);
}
