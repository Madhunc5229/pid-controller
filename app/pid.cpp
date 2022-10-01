#include "../include/pid.h"
#include <iostream>

PID::PID(double kp, double ki, double kd, double dt): 
    _kp(kp),
    _ki(ki), 
    _kd(kd),
    _dt(dt),
    _pre_error(0),
    _integral(0) {}


double PID::computeUpdate(double goal_state, double current_state){


    return 0;

}

double PID::runController(double goal_state, double current_state){


    return 0;
}
