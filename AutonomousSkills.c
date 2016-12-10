const char *AutonomousSkillsName = "Skills";

const int Turn90 = 100;
const int StepOneTime = 200;
const int LauncherUpTime = 500;
const int LauncherStay = -10;


void AutonomousSkills(void)
{
  FastForwardForTime(140);
	wait10Msec(PartTime);
	ClawOpen();
	armup();
	LauncherUp(300);
	ClawClose();
	FastForwardForTime(40);
	FastBackwardsForTime(100);
	FastSidewaysForTime(60);
	LauncherDown(100);
	FastSidewaysForTime(500);
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
