#pragma config(Sensor, in1,    Potentiometer1, sensorPotentiometer)
#pragma config(Sensor, in2,    Potentiometer2, sensorPotentiometer)
#pragma config(Motor,  port1,           LBmotor,       tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           RFmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           LFmotor,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           RBmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           launcher1,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           launcher2,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           launcher3,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           launcher4,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Claw2,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          Claw1,         tmotorVex393_HBridge, openLoop)
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
#include "AutonomousFunctions.c"
#include "Autonomous1.c"
#include "Autonomous2.c"
#include "Autonomous3.c"
#include "RedBlueLeftSide.c"
#include "RedBlueRightSide.c"
#include "AutonomousSkills.c"


void Driver(void)
{
		// motors driven by the sticks
    drive(deadband(vexRT[Ch3]),deadband(vexRT[Ch2]));


}


void Launchers(void)
{
	launcher(deadband(vexRT[Ch3Xmtr2]));
	claw(deadband(vexRT[Ch2Xmtr2]));
}

void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks runningbetween
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;
  autoMode = 0;
  bLCDBacklight = true;
	// initialize the system....
}

task autonomous()
{
	switch(autoMode)
	{
		default:
		case 1:
			Autonomous1();
			break;
		case 2:
			Autonomous2();
			break;
		case 3:
			Autonomous3();
			break;
   }
}

task usercontrol()
{

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

		Driver();
		Launchers();
		writeDebugStream("%d\n",SensorValue(Potentiometer2));
	}
}
