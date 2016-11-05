

int deadband (int stick)
{
	const int db = 7;
	int astick = abs(stick);
	int ret = 0;
	if(astick > db)
	{
		astick = pow(1.1,astick/1.5);

		if(astick > 127) astick = 127;

		if(stick < 0) astick *= -1;
		ret = astick;
	}
	return ret;
}


void Drive(void)
{

		// motors driven by the sticks
		motor[LRmotor] = deadband(vexRT(Ch3));
		motor[RFmotor] = deadband(vexRT(Ch2));
		motor[LFmotor] = deadband(vexRT(Ch3));
		motor[RRmotor] = deadband(vexRT(Ch2));

		if(vexRT[Btn5UXmtr2] == 1)
		{
			launcher(127);
		}

		if(vexRT[Btn5DXmtr2] == 1)
		{
			launcher(0);
		}
		  else
		  {
		  	launcher(0);
		  }


 }
