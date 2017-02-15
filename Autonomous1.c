//Do Nothing code
const char *autonomous1Name = "pickupbox";

void Autonomous1(void)
{
	FastForwardForTime(156);
	wait10Msec(PartTime);
  LeftTurnForTime(60);
  FastForwardForTime(70);
  LeftTurnForTime(60);
  ClawClose();
  FastBackwardsForTime(50);
  ClawOpen();
}
