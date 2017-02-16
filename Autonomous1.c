//Do Nothing code
const char *autonomous1Name = "pickupbox";

void Autonomous1(void)
{
	FastForwardForTime(156);
	wait10Msec(PartTime);
  LeftTurnForTime(60);
  FastForwardForTime(70);
  LeftTurnForTime(60);
  ClawOpen();
  FastBackwardsForTime(40);
  ClawClose();
  FastForwardForTime(20);
  ClawClose();
  FastForwardForTime(20);
  armup();
  ClawOpen();
}
