#include <stdio.h>
#include <stdlib.h>
#include "biseccion.h"
#include "NewtonR.h"
#include "ReglaFalsa.h"
#include "AproxSuce.h"

int main(){
    int op;
    do{
        printf("\n--------------------RA%cCES DE ECUACIONES-------------------------\n", 214);
			printf("\t(1) Bisecci%cn.\n", 162);
			printf("\t(2) Newton Raphson.\n");
			printf("\t(3) Regla falsa.\n");
			printf("\t(4) Aproximaciones sucesivas.\n");
			printf("\t(5) SALIR.\n");
		printf("-----------------------------------------------------------------\n");
        printf("Opci%cn: ", 162);
        scanf("%d", &op);
        printf("\n");
        switch(op){
        case 1:
            //system("cls");
            printf("Bisecci%cn\n", 162);
            BisecMenu();
            break;
        case 2:
            //system("cls");
            printf("Newton.\n");
            NewtonMenu();
            break;
        case 3:
            //system("cls");
            printf("Regla falsa.\n");
            FalsaMenu();
            break;
        case 4:
            //system("cls");
            printf("Aproximaciones sucesivas.\n");
            AproxMenu();
            break;
        case 5:
            printf("Hasta luego.");
            break;
        default:
            printf("Opci%cn no v%clida\nIngresa un n%cmero permitido.\n", 162, 160, 163);
        }
    }while(op!=5);
    return 0;
}
