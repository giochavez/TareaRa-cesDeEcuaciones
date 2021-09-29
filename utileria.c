#include <stdio.h>
#include <math.h>
#include "utileria.h"

double f (double x) {
    return pow (x,3) - 2*pow(x,2)-5;
}
double g (double x) {
    return 3*pow (x,2) - 4*x;
}
double h (double x) {
    return pow(2*pow(x,2)+5,1.0/3.0);
}
