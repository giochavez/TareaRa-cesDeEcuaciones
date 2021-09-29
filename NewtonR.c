#include <stdio.h>
#include <stdlib.h>
#include "utileria.h"
#include "NewtonR.h"

int NewtonMenu(){
    double x0, tol;
    printf ("Valor inicial: ");
    scanf ("%lf",&x0);
    if (g(x0) != 0){
        printf("Tolerancia: ");
        scanf("%lf", &tol);
        NR(x0, tol);
    }
    else{
        printf ("No converge\n");
        }
    return 0;
}


double NR (double x0, double tol) {
    double xr, er;
    int i = 0;

    do {
        xr = x0 - f(x0)/g(x0);
        er = fabs (xr - x0);
        x0 = xr;
        i++;
    } while (er > tol && f(xr) != 0);
    printf ("NR La raiz aprox. = %lf, #iteraciones %d\n",xr,i);

    return xr;
}
