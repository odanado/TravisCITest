#include "../Math.hpp"
#include "gtest/gtest.h"

class MathTest : public ::testing::Test {
protected:
    virtual void SetUp() {
    }
};

TEST_F(MathTest, func) {
    EXPECT_EQ(ns::add(10,20), 30);
    EXPECT_EQ(ns::abs(10), 10);
}
