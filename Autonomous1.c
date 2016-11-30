//Do Nothing code
const char *autonomous1Name = "simple";

void Autonomous1(void)
{
  motor[Claw] = -127;
  wait1Msec(500);
  motor[Claw] = 0;
	FastForwardForTime(150);
	launcher(127);
	wait10Msec(100);
	launcher(0);
	FastBackwardsForTime(10);
}
