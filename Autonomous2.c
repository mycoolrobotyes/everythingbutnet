const char *autonomous2Name = "strategy1";

void Autonomous2(void)
{
	FastForwardForTime(156);
	wait10Msec(PartTime);
	ClawOpen();
	armup();
}
