#pragma config(Motor,  port2,           One,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           Two,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           Three,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           Four,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           Five,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           Six,           tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void RunArm(int speed)
{
		motor[One] = speed;
	motor[Two] = speed;
	motor[Three] = speed;
	motor[Four] = speed;
	motor[Five] = speed;
	motor[Six] = speed;
}



task main()
{
	while(1);
	{
   motor[One] = (vexRT(Ch3));
   motor[Two] = (vexRT(Ch3));
   motor[Three] = (vexRT(Ch3));
   motor[Four] = (vexRT(Ch3));
   motor[Five] = (vexRT(Ch3));
   motor[Six] = (vexRT(Ch3));
}
}