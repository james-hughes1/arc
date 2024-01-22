#include "include/harmonic.h"

/**
 * @brief Function to add two numbers in harmonic space
 * 
 * @param x first number
 * @param y second number
 * @return sum of x and y in harmonic space
 */
double harmonic::harm_add(double x,      double y)
{
    double           xp, yp, zp;

    xp =          1e0/x;
    yp                 = 1e0/y;
    zp = xp+yp;






    return 1e0/zp;
}
