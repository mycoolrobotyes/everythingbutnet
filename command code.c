#pragma config(Sensor, in1,    Potentiometer1, sensorPotentiometer)
#pragma config(Sensor, in2,    Potentiometer2, sensorPotentiometer)
#pragma config(Sensor, dgtl1,  encoder,        sensorRotation)
#pragma config(Motor,  port1,           launcher1,     tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           RFmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           LFmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           RBmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           LBmotor,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           launcher3,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           launcher4,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          launcher2,     tmotorVex393_HBridge, openLoop)
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
#include "RedBlueLeftSide.c"
#include "RedBlueRightSide.c"
#include "AutonomousSkills.c"


#define C1LX deadband(vexRT (Ch4))
#define C1LY deadband(vexRT (Ch3))
#define C1RX deadband(vexRT (Ch1))

void Drive(void)
{

		// Y component, X component, Rotation
		motor[LFmotor] = -C1LY - C1LX - C1RX;
		motor[RFmotor] =  C1LY - C1LX - C1RX;
		motor[RBmotor] =  C1LY + C1LX - C1RX;
		motor[LBmotor] = -C1LY + C1LX - C1RX;

		// Motor values can only be updated every 20ms
		wait10Msec(2);
}

void Launchers(void)
{

int arm_speed = 0;

 if (vexRT[Btn5DXmtr2] == 1)
 {
  arm_speed = 127;
 }

 else if (vexRT[Btn5UXmtr2] == 1)
 {
  arm_speed = -127;
 }
 else
 {
   arm_speed = 0;
 }

 if (vexRT[Btn6DXmtr2] == 1)
 {
  motor[Claw] = 127;
 }

 else if (vexRT[Btn6UXmtr2] == 1)
 {
  motor[Claw] = -127;
 }
 else
 {
  motor[Claw] = 0;
 }
	//arm_speed = deadband(vexRT(Ch3Xmtr2));

	writeDebugStream("%d : ",arm_speed);
	if(arm_speed < 0)
	{
		if(SensorValue(Potentiometer2) > 2700)
		{
			arm_speed = 0;
			writeDebugStream("LimitReached\n");
		}
	}
	/*
	else if(arm_speed > 0)
	{
		if(SensorValue(Potentiometer2) < 160)
		{
			arm_speed = 0;
		}
	}
	*/
	writeDebugStream("%d\n",arm_speed);
	launcher(arm_speed);
}
void pre_auton()
{
	// Set bStopTasksBetweenModes to false if you want to keep user created tasks runningbetween
	// Autonomous and Tele-Op modes. You will need to manage all user created tasks if set to false.
	bStopTasksBetweenModes = true;
  autoMode = 0;
	// initialize the system....


}


task autonomous()
{
	AutonomousSkills();

/*
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
*/
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

		Drive();
		Launchers();
		writeDebugStream("%d\n",SensorValue(Potentiometer2));
	}
}
