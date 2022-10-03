/**
 * @file pid.cpp
 * @author Divyansh Agrawal (Driver), Sahruday Patti (Navigator)
 * @brief file where methods have been defined
 * @version 0.1
 * @date 2022-10-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/pid.h"
#include <iostream>

PID::PID(double kp, double ki, double kd, double dt):
    _kp(kp),
    _ki(ki),
    _kd(kd),
    _dt(dt),
    _pre_error(0),
    _integral(0) {}


double PID::computeUpdate(double goal_state, double current_state) {
// Calculate error
    double error = goal_state - current_state;

    // error = abs(error);

    // Proportional term
    double Pout = _kp * error;

    // Integral term
    _integral += error * _dt;
    double Iout = _ki * _integral;

    // Derivative term
    double derivative = (error - _pre_error) / _dt;
    double Dout = _kd * derivative;

    // Calculate total output
    double output = Pout + Iout + Dout;

    // Save error to previous error
    _pre_error = error;

    return output;
}

double PID::runController(double goal_state, double current_state) {
for (int i=0; i < 100; i++) {
        current_state += computeUpdate(goal_state, current_state);
    }
    return current_state;
}
