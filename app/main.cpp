/**
 * @file main.cpp
 * @author Madhu Narra Chittibabu (madhunc117@gmail.com)
 * @brief main file for pid controller program
 * @version 0.1
 * @date 2022-10-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include "../include/pid.h"

/**
 * @brief starting point for the pid controller program
 * 
 * @return int 
 */
int main() {
    PID pidobj = PID(0.5, 0.1, 0.01, 0.1);
    double current_state = pidobj.runController(100, 0);
    std::cout << "current state is: " << current_state;
}
