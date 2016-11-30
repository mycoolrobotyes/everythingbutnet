const char *autonomous2Name = "strategy1";

void Autonomous2(void)
{
	FastForwardForTime(50);
	wait10Msec(PartTime);
	armup();
}
