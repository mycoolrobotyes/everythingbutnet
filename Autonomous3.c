
//Do Nothing code
const char *autonomous3Name = "Hang!";

void Autonomous3(void)
{
  clearLCDLine(1);
  setLCDPosition(1, 0);
  displayNextLCDString("Running Hang");

	FastForwardForTime(156);
}
