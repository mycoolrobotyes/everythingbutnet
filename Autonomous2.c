const char *autonomous2Name = "simple";

void Autonomous2(void)
{
  clearLCDLine(1);
  setLCDPosition(1, 0);
  displayNextLCDString("Running simple");

	FastForwardForTime(156);
	wait10Msec(PartTime);
	ClawClose2();
	armup();
}
