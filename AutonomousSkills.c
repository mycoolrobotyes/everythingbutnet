const char *AutonomousSkillsName = "Skills";

const int Turn90 = 100;
const int StepOneTime = 180;
const int LauncherUpTime = 500;
const int LauncherStay = -10;


void LauncherUp(int time)
{
	launcher(-127);
	wait1Msec(time);
	launcher(0);
}

void LauncherDown(int time)
{
	launcher(-30);
	wait1Msec(time);
	launcher(0);
}

void AutonomousSkills(void)
{
  FastForwardForTime(156);
	wait10Msec(PartTime);
	ClawOpen();
	armup();
	ClawClose();
	LauncherUp(300);
	FastForwardForTime(40);
	FastBackwardsForTime(100);
	FastSidewaysForTime(60);
	LauncherDown(100);
	FastSidewaysForTime(400);
	FastBackwardsForTime(StepOneTime);
	wait10Msec(200);
	FastForwardForTime(StepOneTime);
	ClawOpen();

	ClawClose();
	FastBackwardsForTime(StepOneTime);
	wait10Msec(200);
	FastForwardForTime(StepOneTime);
	ClawOpen();

}
