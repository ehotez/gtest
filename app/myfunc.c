#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include "myfunc.h"

int quad_equation(double a, double b, double c, double *x1, double *x2) {
    double discriminant = b * b - 4 * a * c;
    int count = 0;
    if (discriminant < 0 || a == 0) {
        *x1 = *x2 = 0;
    } else if (discriminant == 0) {
        *x1 = *x2 = -b / (2 * a);
        count = 1;
    } else {
        *x1 = (-b - sqrt(discriminant)) / (2 * a);
        *x2 = (-b + sqrt(discriminant)) / (2 * a);
        count = 2;
    }
    return count;
}

