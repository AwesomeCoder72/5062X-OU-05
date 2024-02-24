#include "catapult.hpp"
#include "main.h"
#include "lemlib/api.hpp"

#include "intake.hpp"
#include "pistons.hpp"

#include "autons.hpp"

float move_distance = 0.0;

const float DISTANCE_AWAY_FROM_TRIBALL = 8.5;

void goofy_auton() {

    spin_intake_auto(true, 200);

    // chassis.setPose(-36, -36, 90);

    // chassis.turnTo(-60, -36, 10000);



    chassis.setPose(-34, -57, 9.95);

    chassis.moveToPose(-25.349, -6.409, 9.95, 3000);

    chassis.waitUntilDone();

    chassis.turnTo(-24, -20, 1000, false);

    chassis.waitUntilDone();

    chassis.moveToPose(-24, -20, 0, 3000, {.forwards=false});    

/*
    chassis.setPose(-38, -60, 90);

    move_distance = 38.00;

    chassis.moveToPose(-14, -60, 90, 10000);

    chassis.waitUntilDone();

    chassis.moveToPose(-38, -60, 90, 10000, {.forwards = false});

    chassis.waitUntilDone();
*/

    // chassis.setPose(-60, -36, 90);

    // move_distance = 24.00;

    // chassis.moveToPose(-28, -36, 90, 2000, {.minSpeed=70});
    // chassis.waitUntil(move_distance - 2.0);

    // chassis.cancelAllMotions();

    // chassis.turnTo(-28, -12, 2000);

    // chassis.waitUntilDone();

    // move_distance = 24.00;

    // chassis.moveToPose(-28, -12, 0, 2000, {.minSpeed=70});
    // chassis.waitUntil(move_distance - 2.0);
}

void skills() {
    spin_cata_auto(100);
    pros::delay(36500); // 39500
    stop_cata_auto();

    chassis.turnTo(0, -59, 1500, true); // turn to move to center

    // chassis.moveToPose(40, -61, 90, 1500, {false, 0, 0.6, 127, 50, 0}); // move into offensive zone

    chassis.turnTo(52.5, -44, 600, true); // turn to diagonal

    chassis.moveToPoint(52.5, -44, 1500, 180);

    actuate_front_wings(true);

    chassis.turnTo(58, 0, 600, true);

    chassis.moveToPoint(58, -24, 1500, 200); // side push??

    actuate_front_wings(false);

    chassis.moveToPoint(58,-36, 1500, 160);

    chassis.turnTo(22, -24, 600, true);

    chassis.moveToPoint(22, -24, 1500, 150); //go to line

    chassis.turnTo(22, 0, 600, true);

    chassis.moveToPoint(22,0,700,160);

    actuate_front_wings(true);

    chassis.turnTo(48, 0, 600, true);

    chassis.moveToPoint(43, -8, 1500, 300); // first push

    actuate_front_wings(false);

    chassis.moveToPoint(10, 15, 1500, 160);

    actuate_front_wings(true);


    chassis.moveToPoint(43, 15, 1500, 300); // second push

    chassis.moveToPoint(10, 15, 1500, 160);

    actuate_front_wings(false);

    chassis.turnTo(44, 50, 600, true);

    chassis.moveToPoint(44, 50, 700);

    chassis.turnTo(60, 24, 600, true);

    actuate_front_wings(true);

    chassis.moveToPoint(60, 18, 700, 200);

    chassis.moveToPoint(51, 42, 700, 200);

    actuate_front_wings(false);


    chassis.moveToPoint(60, 18, 700, 200);

    chassis.moveToPoint(51, 42, 700, 200);


}