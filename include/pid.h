/**
 * @file pid.h
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief this file contains the class for implementing pid controller
 * @version 0.1
 * @date 2022-10-01
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef _PID_H_
#define _PID_H_

/**
 * @brief Pid class with methods and attributes to compute the final state
 * 
 */
class PID {
public:
  /**
   * @brief Constructor to contruct a new PID object
   * 
   * @param kp Proportional gain
   * @param ki Integral gain
   * @param kd Derivitive gain
   * @param dt change in time
   */
  PID(double kp, double ki, double kd, double dt);

  /**
   * @brief this method computes the pid error for a given current and goal state
   * 
   * @param goal_state goal state
   * @param current_state current state
   * @return double pid error 
   */
  double computeUpdate(double goal_state, double current_state);

  /**
   * @brief this method call computeUpdate method 100 times to compute final state
   * 
   * @param goal_state goal state
   * @param current_state current state
   * @return double final state of the system
   */
  double runController(double goal_state, double current_state);

private:

  double _kp;
  double _ki;
  double _kd;
  double _dt;
  double _pre_error;
  double _integral;
};

#endif