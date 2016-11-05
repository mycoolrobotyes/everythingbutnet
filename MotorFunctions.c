
void driving(int left, int right)
{
	motor[LFmotor] = left;
	motor[LRmotor] = left;
	motor[RFmotor] = right;
	motor[RRmotor] = right;
}

void launcher(int speed)
{
	motor[launcher1] = speed;
	motor[launcher2] = speed;
	motor[launcher34] = speed;
	motor[launcher5] = speed;
	motor[launcher6] = speed;
}

int motorValue = 0;

task speedControl()
{
	static int minSetting=0;
	long dp;
	int pos;
	int pos_pv=0;
	int error;
  long average=0;
	int speedMaxLimit = 0;               //sets the maximum slingshot speed
	int speedMinLimit = 0;               //sets minimum slingshot


		wait1Msec(50);
	}
