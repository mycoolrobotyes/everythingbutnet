//Do Nothing code
const char *autonomous1Name = "pickupbox";

void Autonomous1(void)
{
  clearLCDLine(1);
  setLCDPosition(1, 0);
  displayNextLCDString("Running pickupbox");

	FastForwardForTime(150);
	wait10Msec(PartTime);
  LeftTurnForTime(39);
  FastForwardForTime(113);
  LeftTurnForTime(38);
  FastBackwardsForTime(25);
  ClawClose2();
  FastForwardForTime(44);
  ClawClose();
  armup();
  FastBackwardsForTime(44);
  wait10Msec(MainTime);
  Clawletgo();
  armstop();
}
