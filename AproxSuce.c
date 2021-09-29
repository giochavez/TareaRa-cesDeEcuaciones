#include <stdio.h>
#include <stdlib.h>
#include "utileria.h"
#include "AproxSuce.h"

int AproxMenu(){
    double a, b, tol;
    printf ("Intervalo a: ");
    scanf ("%lf",&a);
    printf("Intervalo b: ");
    scanf("%lf", &b);
    printf ("Tolerancia: ");
    scanf ("%lf",&tol);
    aproximacion(a,b,tol);
    return 0;
}

double aproximacion (double a, double b, double tol) {
    double c, er;
    int i = 0;

    do {
        c = (a+b)/ 2.0; //porque n = 2
        a = h(c);
        b = c;
        er = fabs (a - b);
        i++;
    } while (er > tol && h(c) != 0);
    printf ("MB La raiz aprox. = %lf, #iteraciones %d\n",c,i);

    return c;
}
