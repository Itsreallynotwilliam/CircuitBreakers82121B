#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller1 = controller(primary);

//The motor constructor takes motors as (port, ratio, reversed), so for example
motor LeftFront = motor(PORT1, ratio6_1, false);
motor LeftMiddle = motor(PORT2, ratio6_1, false);
motor LeftBack = motor(PORT3, ratio6_1, false);

motor RightFront = motor(PORT4, ratio6_1, false);
motor RightMiddle = motor(PORT5, ratio6_1, false);
motor RightBack = motor(PORT6, ratio6_1, false);

motor_group leftGroup = motor_group(LeftFront, LeftMiddle, LeftBack);
motor_group rightGroup = motor_group(RightFront, RightMiddle, RightBack);

//Add your devices below, and don't forget to do the same in robot-config.h:


void vexcodeInit( void ) {
  // nothing to initialize
}