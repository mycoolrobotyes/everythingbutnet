//Do Nothing code
const char *autonomous1Name = "pickupbox";

void Autonomous1(void)
{
  clearLCDLine(1);
  setLCDPosition(1, 0);
  displayNextLCDString("Running pickupbox");
  
	FastForwardForTime(240);
	wait10Msec(PartTime);
  LeftTurnForTime(62);
  FastForwardForTime(180);
  LeftTurnForTime(60);
  FastBackwardsForTime(40);
  ClawClose2();
  FastForwardForTime(70);
  ClawClose();
  armup();
  FastBackwardsForTime(70);
  wait10Msec(MainTime);
  Clawletgo();
  armstop();
}
