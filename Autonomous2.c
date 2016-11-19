const char *autonomous2Name = "strategy1";

void Autonomous2(void)
{
  motor[Claw] = 127;
  wait1Msec(500);
  motor[Claw] = 0;
	FastForwardForTime(1500);
	launcher(127);
	wait1Msec(500);
	launcher(0);
}
