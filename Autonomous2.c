const char *autonomous2Name = "simple";

void Autonomous2(void)
{
	FastForwardForTime(156);
	wait10Msec(PartTime);
	ClawClose2();
	armup();
}
