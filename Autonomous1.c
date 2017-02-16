//Do Nothing code
const char *autonomous1Name = "pickupbox";

void Autonomous1(void)
{
	FastForwardForTime(270);
	wait10Msec(PartTime);
  LeftTurnForTime(70);
  FastForwardForTime(200);
  LeftTurnForTime(60);
  FastBackwardsForTime(80);
  ClawOpen();
  ClawClose();
  FastForwardForTime(40);
  armup();
  ClawOpen();
}
