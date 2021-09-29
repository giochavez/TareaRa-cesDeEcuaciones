#include <stdio.h>
#include <stdlib.h>
#include "utileria.h"
#include "ReglaFalsa.h"

int FalsaMenu(){
    double a, b, tol;
    printf ("Intervalo a: ");
    scanf ("%lf",&a);
    printf("Intervalo b: ");
    scanf("%lf", &b);
    if (f(a)*f(b)<=0){
            printf ("Tolerancia: ");
            scanf ("%lf",&tol);
            falsa(a,b,tol);
    }
    else{
            printf("No converge\n");
    }
    return 0;
}

double falsa (double a, double b, double tol) {
    double c, er, era, et;
    era = 0;
    er = 0;
    c = 0;
    int i = 0;

    do {
        era = er;
        c =  b-(f(b)*(b-a))/(f(b)-f(a));
        if (f(a)*f(c) < 0)  b = c;
        else                a = c;
        er = c;
        et = fabs(era-er);
        i++;
    } while (et > tol && f(c) != 0);
    printf ("MB La raiz aprox. = %lf, #iteraciones %d\n",c,i);

    return c;
}
