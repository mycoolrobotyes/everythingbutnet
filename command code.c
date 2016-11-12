#pragma config(Sensor, in1,    Potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in5,    Potentiometer2, sensorPotentiometer)
#pragma config(Sensor, dgtl1,  encoder,        sensorRotation)
#pragma config(Motor,  port1,           launcher5,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           LFmotor,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           LRmotor,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           RRmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           winch,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           launcher1,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           RFmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           launcher2,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           launcher34,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          launcher6,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

short autoMode;

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!
#include "Drive.c"
#include "RTTTL.c"
#include "MotorFunctions.c"
#include "Autonomous1.c"
#include "RedBlueLeftSide.c"
#include "RedBlueRightSide.c"


void Drive(void)
{

	// motors driven by the sticks
	motor[LRmotor] = deadband(vexRT(Ch3));
	motor[RFmotor] = deadband(vexRT(Ch2));
	motor[LFmotor] = deadband(vexRT(Ch3));
	motor[RRmotor] = deadband(vexRT(Ch2));

	if (vexRT[Btn6UXmtr2] == 1)
	{
		motor[winch] = 127
	}

	if (vexRT[Btn6DXmtr2] == 1)
	{
		motor[winch] = -127
	}

}

void Launchers(void)
{
	if(vexRT[Btn5UXmtr2] == 1)
	{
		if(SensorValue(Potentiometer) > 2000)
		{
			launcher(0);
			WriteDebugStream("LimitReached\n");
		}
		else
		{
			launcher(-127);
		}
	}
	else if(vexRT[Btn5DXmtr2] == 1)
	{
		if(SensorValue(Potentiometer) > 160)
		{
			launcher(127);
		}
		else
		{
			launcher(0);
		}
	}
	else
	{
		launcher(0);
	}
}
void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks runningbetween
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;
  autoMode = 0;
	// initialize the system....
//startTask(PositionControl,150);

}


task autonomous()
{

	switch(autoMode)
	{
		case 0:
			Autonomous1();
			break;
		case 1:
			RedBlueLeftSide();
			break;
		case 2:
			RedBlueRightSide();
			break;
   }

}

task usercontrol()
{

	//startTask(PositionControl,150);



	while(1)
	{
		if(vexRT(Btn8LXmtr2) == 1)
		{
			playYaketysax();
		}

		if(vexRT(Btn8U) == 1)
		{
			playYaketysax();
		}

		if(vexRT[Btn8RXmtr2] == 1)
		{
			playAxelF();
		}
		if(vexRT[Btn8UXmtr2] == 1)
		{
			playStarWars();
		}

		if(vexRT(Btn8DXmtr2) == 1)
		{
			playMissionImpossible();
		}
		Drive();
		Launchers();
		WriteDebugStream("%d\n",SensorValue(Potentiometer));
	}
}
