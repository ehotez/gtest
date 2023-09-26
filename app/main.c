#include <stdio.h>

#include "myfunc.h"

int main()
{
    printf("Hello World!\n");
    double x1, x2;
    quad_equation(2, 1, -3, &x1, &x2);
    printf("Roots: %lf и %lf\n", x1, x2);
    return 1;
}
