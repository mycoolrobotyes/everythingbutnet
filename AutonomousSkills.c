const char *AutonomousSkillsName = "Skills";

void AutonomousSkills(void)
{
  motor[Claw] = 127;
  wait1Msec(500);
  motor[Claw] = 0;
	FastForwardForTime(150);
	launcher(127);
	wait1Msec(500);
	launcher(0);
	FastBackwardsForTime(10);
	motor[Claw] = -127;
	wait10Msec(50);
	motor[Claw] = 0;
	LeftTurnForTime(80);
	FastForwardForTime(100);
	launcher(127);
	wait1Msec(500);
	launcher(0);
	RightTurnForTime(120);
	launcher(127);
	wait1Msec(500);
	launcher(10);
	LeftTurnForTime(120);
	FastForwardForTime(100);
	RightTurnForTime(120);
	motor[Claw] = -127;
	wait10Msec(50);
	motor[Claw] = 0;
	FastBackwardsForTime(150);
	wait10Msec(200);
	FastForwardForTime(150);
	motor[Claw] = 127;
	wait10Msec(50);
	motor[Claw] = 0;
	motor[Claw] = -127;
	wait10Msec(50);
	motor[Claw] = 0;
	FastBackwardsForTime(150);
	wait10Msec(200);
	FastForwardForTime(150);
	motor[Claw] = 127;
	wait10Msec(50);
	motor[Claw] = 0;
}
