
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
	static int launcherButton_pv = 0;
	static int launching = 0;

		// motors driven by the sticks
		motor[LRmotor] = deadband(vexRT(Ch3));
		motor[RFmotor] = deadband(vexRT(Ch2));
		motor[LFmotor] = deadband(vexRT(Ch3));
		motor[RRmotor] = deadband(vexRT(Ch2));

		if(vexRT[Btn7UXmtr2] == 1)
		{
			setLauncherSpeed (94);
		}

		if(vexRT[Btn7RXmtr2] == 1)
		{
			setLauncherSpeed (100);
		}

		if(vexRT[Btn7DXmtr2] == 1)
		{
			setLauncherSpeed (106);
		}

		if(vexRT[Btn5UXmtr2] == 1)
 		 {
		   backwardslauncher();
		  }


		 if(vexRT[Btn5DXmtr2] == 1)
 		 {
		   launcherOn();
		  }
		  else
		  {
		  	launcherOff();
		  }

    if(vexRT[Btn6UXmtr2] == 1)
 		 {
		   motor[ballgrabbythingy] = 127;
		   motor[ballgrabbythingy2] = 127;
		  }
		  else if(vexRT[Btn6DXmtr2] == 1)
  		{
 		  motor[ballgrabbythingy] = -127;
 		 	motor[ballgrabbythingy2] = -127;
  		}
  		else
 		 {
	  	 motor[ballgrabbythingy] = 0;
	     motor[ballgrabbythingy2] = 0;
    	}


 }
