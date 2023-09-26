#ifndef FIBONACHI_H
#define FIBONACHI_H

#include <gtest/gtest.h>

#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern "C" {
#include "myfunc.h"
}

TEST(QuadEquationTest, TwoRealRoots) {
    double a = 1.0, b = -3.0, c = 2.0, x1 = 0.0, x2 = 0.0;
    quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(x1, 1.0);
    ASSERT_EQ(x2, 2.0);
}

TEST(QuadEquationTest, OneRealRoot) {
    double a = 1.0, b = -4.0, c = 4.0, x1 = 0.0, x2 = 0.0;
    quad_equation(a, b, c, &x1, &x2);
    ASSERT_EQ(x1, 2.0);
    ASSERT_EQ(x2, 2.0);
}

TEST(QuadEquationTest, NoRealRoots) {
    double a = 1.0, b = 2.0, c = 3.0, x1 = 0.0, x2 = 0.0;
    quad_equation(a, b, c, &x1, &x2);
    ASSERT_TRUE(_isnan(x1));
    ASSERT_TRUE(_isnan(x2));
}

#endif // FIBONACHI_H
