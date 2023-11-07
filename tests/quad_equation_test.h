#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <cmath>
#include <gtest/gtest.h>
#include <fcntl.h>
#include <errno.h>
#include <limits.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(QuadEquationTest, TwoRealRoots) {
    double a = 1.0, b = -3.0, c = 2.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 2);
    ASSERT_EQ(x1, 1.0);
    ASSERT_EQ(x2, 2.0);
}

TEST(QuadEquationTest, OneRealRoot) {
    double a = 1.0, b = -4.0, c = 4.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 1);
    ASSERT_EQ(x1, 2.0);
    ASSERT_EQ(x2, 2.0);
}

TEST(QuadEquationTest, NoRealRoots) {
    double a = 1.0, b = 2.0, c = 3.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 0);
}

TEST(QuadEquationTest, NegativeA) {
    double a = -1.0, b = 2.0, c = 3.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 2);
    ASSERT_EQ(x1, 3.0);
    ASSERT_EQ(x2, -1.0);
}

TEST(QuadEquationTest, ZeroA) {
    double a = 0.0, b = 2.0, c = 3.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 0);
}

TEST(QuadEquationTest, ZeroB) {
    double a = 1.0, b = 0.0, c = 3.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 0);
}

TEST(QuadEquationTest, ZeroC) {
    double a = 1.0, b = 2.0, c = 0.0, x1 = 0.0, x2 = 0.0;
    int count = quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(count, 2);
    ASSERT_EQ(x1, -2.0);
    ASSERT_EQ(x2, 0.0);
}



#endif // FIBONACHI_H
