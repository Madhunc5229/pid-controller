#include <gtest/gtest.h>
#include "../include/pid.h"



TEST(OutputTest, DecreasingValueCheck){
    ASSERT_NEAR(0, PID(0.5, 0.1, 0.01, 0.1).runController(0, 10), 0.5);
}

TEST(OutputTest, IncreasingValueCheck){
    ASSERT_NEAR(100, PID(0.5, 0.1, 0.01, 0.1).runController(100, 0), 1);
}

TEST(ComputeTest, IncreasingValueCheck){
    ASSERT_NEAR(61, PID(0.5, 0.1, 0.01, 0.1).computeUpdate(100, 0), 1);
}

