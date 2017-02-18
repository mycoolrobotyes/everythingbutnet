/// @file Vex_Competition_Includes.c
/// @brief robot_c supplied file for basic configurations
///////////////////////////////////////////////////////////////////////////////////////////////////////
///
///                       VEX Competition Control Include File
///
/// This file provides control over a VEX Competition Match. It should be included in the user's
/// program with the following line located near the start of the user's program
///        #include "VEX_Competition_Includes.h"
/// The above statement will cause this program to be included in the user's program. There's no
/// need to modify this program.
///
/// The program displays status information on the new VEX LCD about the competition state. You don't
/// need the LCD, the program will work fine whether or not the LCD is actually provisioned.
///
/// The status information is still useful without the LCD. The ROBOTC IDE debugger has a "remote screen"
/// that contains a copy of the status information on the LCD. YOu can use this to get a view of the
/// status of your program. The remote screen is shown with the menu command
///   "Robot -> Debugger Windows -> VEX Remote Screen"
///
/// The LCD is 2 lines x 16 characters. There are three display formats to look for:
///~~~
///        State          Description
///
///    ----------------
///   |Disabled        |  The robot is idle. This occurs before both the autonomous and user
///   |Time mm:ss.s    |  control states. The time display is minutes and seconds it has been idle.
///    ----------------
///
///    ----------------
///   |Autonomous      |  The robot is running autonomous code.
///   |Time mm:ss.s    |  control states. The time display is minutes and seconds it has been running.
///    ----------------
///
///    ----------------
///   |User Control    |  The robot is running user control code.
///   |Time mm:ss.s    |  control states. The time display is minutes and seconds it has been running.
///    ----------------
///~~~
///////////////////////////////////////////////////////////////////////////////////////////////////////

void allMotorsOff(); ///< turns off all the motors
void allTasksStop(); ///< stop all auxiliary tasks
void pre_auton();    ///< sets up the system to run autonomous mode
task autonomous();   ///< This is the task for running autonomous
task usercontrol();  ///< This is the task for managing the user control

int nTimeXX = 0;
bool bStopTasksBetweenModes = true;

static void displayStatusAndTime();

static int runMenuSelector(void)
{
	int autoMode = 1;
	int timeout = 0;
	bool selected = false;

	clearLCDLine(0);
	clearLCDLine(1);
	setLCDPosition(0, 0);
	displayNextLCDString("Menu Selector");

	setLCDPosition(1, 0);
	displayNextLCDString("PICK");

	setLCDPosition(1, 4);
	displayNextLCDString("SIMP");

	setLCDPosition(1,12);
	displayNextLCDString("HANG");

	selected = false;
	timeout = 0;
	while(timeout < 12000 && !selected) // milliseconds to run the selector
	{
		int buttons = nLCDButtons;
		switch(buttons) ///< read the current LCD button state
		{
			case 0: ///< No Button Pressed
				selected = false;
				break;

			default: ///< undefined button combination
				selected = false;
				autoMode = 1;
				break;

			case 1: ///< left button pressed
				selected = true;
				autoMode = 1;
				break;
			case 2: ///< center button pressed
				autoMode = 2;
				selected = true;
				break;
			case 4: ///< right button pressed
				selected = true;
				autoMode = 3;
				break;
		}

		wait1Msec(25);
		timeout += 25;
	}

	// print our choice
	clearLCDLine(0);
	clearLCDLine(1);
	setLCDPosition(0, 0);
	switch(autoMode)
	{
		default:
			autoMode = 1;
		case 1:
			displayNextLCDString("pickupbox");
			break;
		case 2:
			displayNextLCDString("simple");
			break;
		case 3:
			displayNextLCDString("Hang");
			break;
	}

	return autoMode;
}

/// @brief This is where C starts

task main()
{
	// Master CPU will not let competition start until powered on for at least 2-seconds
	clearLCDLine(0);
	clearLCDLine(1);
	displayLCDPos(0, 0);
	displayNextLCDString("Startup");
	wait1Msec(2000);

	pre_auton();

	while (true)
	{

		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDPos(0, 0);
		clearLCDLine(0);
		clearLCDLine(1);
		int autoMode   = 1;

		// display the choice on the LCD
		autoMode = runMenuSelector();

		while (bIfiRobotDisabled)
		{
			displayLCDPos(1, 0);
			displayNextLCDString("Disabled");
			nTimeXX = 0;
			while (true)
			{
				int x = 0;
				for(x=0;x<4;x++)
				{
					displayStatusAndTime();
					if (!bIfiRobotDisabled)
					break;
					wait1Msec(25);
				}
				++nTimeXX;
			}
		}

		nTimeXX = 0;
		clearLCDLine(0);
		clearLCDLine(1);
		displayLCDPos(0, 0);
		if (bIfiAutonomousMode)
		{
		    displayNextLCDString("Autonomous");
			startTask(autonomous);

			// Waiting for autonomous phase to end
			while (bIfiAutonomousMode && !bIfiRobotDisabled)
			{
				if (!bVEXNETActive)
				{
					if (nVexRCReceiveState == vrNoXmiters) // the transmitters are powered off!!
						allMotorsOff();
				}
				wait1Msec(25);               // Waiting for autonomous phase to end
			}
			allMotorsOff();
			if(bStopTasksBetweenModes)
			{
				allTasksStop();
			}
		}

		else
		{
	    	displayNextLCDString("User Control");
			startTask(usercontrol);

			// Here we repeat loop waiting for user control to end and (optionally) start
			// of a new competition run
			while (!bIfiAutonomousMode && !bIfiRobotDisabled)
			{
				if (nVexRCReceiveState == vrNoXmiters) // the transmitters are powered off!!
					allMotorsOff();
				wait1Msec(25);
			}
			allMotorsOff();
			if(bStopTasksBetweenModes)
			{
				allTasksStop();
			}
		}
	}
}

/// @brief stop all motors
///
/// write zero speed to every motor that could be attached
///
void allMotorsOff()
{
	motor[port1] = 0;
	motor[port2] = 0;
	motor[port3] = 0;
	motor[port4] = 0;
	motor[port5] = 0;
	motor[port6] = 0;
	motor[port7] = 0;
	motor[port8] = 0;
#if defined(VEX2)
	motor[port9] = 0;
	motor[port10] = 0;
#endif
}

/// @brief stop all running tasks
///
/// this function stops all tasks by attempting to stop all possible tasks that could be running.
///
void allTasksStop()
{
  stopTask(1);
  stopTask(2);
  stopTask(3);
  stopTask(4);
#if defined(VEX2)
  stopTask(5);
  stopTask(6);
  stopTask(7);
  stopTask(8);
  stopTask(9);
  stopTask(10);
  stopTask(11);
  stopTask(12);
  stopTask(13);
  stopTask(14);
  stopTask(15);
  stopTask(16);
  stopTask(17);
  stopTask(18);
  stopTask(19);
#endif
}

/// @brief display the current status of the robot on the LCD
///
/// shows the current time on the LCD along with the operating mode
///
static void displayStatusAndTime()
{
	displayLCDPos(1, 0);
	if (bIfiRobotDisabled)
		displayNextLCDString("Disable ");
	else
	{
		if (bIfiAutonomousMode)
			displayNextLCDString("Auton  ");
		else
			displayNextLCDString("Driver ");
	}
	displayNextLCDNumber(nTimeXX / 600, 2);
	displayNextLCDChar(':');
	displayNextLCDNumber((nTimeXX / 10) % 60, -2);
	displayNextLCDChar('.');
	displayNextLCDNumber(nTimeXX % 10, 1);
}


/// @brief Usercontrol code for initial debugging
///
/// It can be safely removed in a real program	and removing it will slightly improve the
/// real-time performance of your robot.
///
static void UserControlCodePlaceholderForTesting(void)
{
	displayStatusAndTime();
	wait1Msec(100);
	++nTimeXX;
}

/// @brief Autonomous code for initial debugging
///
/// It can be safely removed in a real program	and removing it will slightly improve the
/// real-time performance of your robot.
///
static void AutonomousCodePlaceholderForTesting(void)
{
	while (true)
	{
		displayStatusAndTime();
		wait1Msec(100);
		++nTimeXX;
	}
}
