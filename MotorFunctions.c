
void driving(int left, int right)
{
	motor[LFmotor] = left;
	motor[LRmotor] = left;
	motor[RFmotor] = right;
	motor[RRmotor] = right;
}

int motorValue = 0;

task speedControl()
{

	while(1)
	{

		wait1Msec(50);
	}

}
