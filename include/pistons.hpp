#pragma once
#include "intake.hpp"
#include "main.h"
#include "pros/adi.hpp"

extern pros::ADIDigitalOut RightFrontWingActuator;
extern pros::ADIDigitalOut LeftFrontWingActuator;

extern bool intake_actuated_value;
extern bool right_front_wing_actuated_value;
extern bool left_front_wing_actuated_value;

void actuate_right_front_wing(bool out_value);
void actuate_left_front_wing(bool out_value);
void actuate_front_wings(bool out_value);