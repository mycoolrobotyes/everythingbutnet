const char *autonomous3Name = "RedBlueRightSide";

void RedBlueRightSide(void)
{
	while(1)
	{
	drive(127,127);
	wait10Msec(500);
	drive(0,0);
	wait10Msec(100);
	drive(-127,127);
	wait10Msec(500);
	drive(127,127);
	wait10Msec(100);
	drive(0,0);
	launcher(127);
	wait10Msec(300);
	launcher(0);
	drive(127,-127);
	wait10Msec(500);
	drive(0,0);
	wait10Msec(10);
	drive(-127,127);
	wait10Msec(500);
	drive(0,0);
	wait10Msec(10);
}

}
