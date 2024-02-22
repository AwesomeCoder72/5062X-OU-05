#include  "pistons.hpp"
#include "main.h"

bool intake_actuated_value = false;

bool right_front_wing_actuated_value = false;
bool left_front_wing_actuated_value = false;

void actuate_right_front_wing(bool out_value) {
  RightFrontWingActuator.set_value(out_value);
  right_front_wing_actuated_value = out_value;
}

void actuate_left_front_wing(bool out_value) {
  LeftFrontWingActuator.set_value(out_value);
  left_front_wing_actuated_value = out_value;
}

void actuate_front_wings(bool out_value) {
  RightFrontWingActuator.set_value(out_value);
  LeftFrontWingActuator.set_value(out_value);
  right_front_wing_actuated_value = out_value;
  left_front_wing_actuated_value = out_value;
}