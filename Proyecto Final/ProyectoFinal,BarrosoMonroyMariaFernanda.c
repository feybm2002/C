//
//  Proyecto Final
//  Maria Fernanda Barroso Monroy
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header1.h"
#include "Header2.h"
#include "Header3.h"
#include "Header4.h"
#include "Header5.h"
#include "Header6.h"
#include "Header7.h"
#include "Header8.h"
#include "Header9.h"
#include "Header10.h"
#include "Header11.h"
#include "Header12.h"
#include "Header13.h"
#include "Header14.h"

int main(void)
{
    int sel, op;
    printf("Bienvenido.\n");
    printf("1.Menu de programas.\n");
    printf("2.Salir.\n");
    printf("Seleccione:\n");
    scanf("%i",&sel);
    switch (sel) {
        case 1:
    printf("\n Bienvenido al menu de programas.\n");
    printf("\n·Programas·\n");
    printf("\n 1.Suma Basica\n");
    printf("\n 2.Resta Basica\n");
    printf("\n 3.Multiplicación Basica\n");
    printf("\n 4.División Basica\n");
    printf("\n 5.No. Mayor o Menor\n");
    printf("\n 6.División o Multiplicación\n");
    printf("\n 7.Identificador de letras\n");
    printf("\n 8.Suma con while\n");
    printf("\n 9.Suma con if\n");
    printf("\n 10.Factorial\n");
    printf("\n 11.Multiplicación con for\n");
    printf("\n 12.Cadena\n");
    printf("\n 13.Matriz\n");
    printf("\n 14.Multiplicación de matrices\n");
    printf("\n Ingrese el numero del programa que desea usar:\n");
    scanf("%i",&op);
    switch (op) {
        case 1:Header1();
            break;
        case 2:Header2();
            break;
        case 3:Header3();
            break;
        case 4:Header4();
            break;
        case 5:Header5();
            break;
        case 6:Header6();
            break;
        case 7:Header7();
            break;
        case 8:Header8();
            break;
        case 9:Header9();
            break;
        case 10:Header10();
            break;
        case 11:Header11();
            break;
        case 12:Header12();
            break;
        case 13:Header13();
            break;
        case 14:Header14();
            break;
        default:
            break;
    };
            printf("Seleccione 1 para regresar al menu.\n");
            printf("Seleccione 2 para salir del menu.\n");
            scanf("%i",&sel);
            while (sel==1) {
            switch (sel) {
                case 1:
                    printf("\n Bienvenido al menu de programas.\n");
                    printf("\n·Programas·\n");
                    printf("\n 1.Suma Basica\n");
                    printf("\n 2.Resta Basica\n");
                    printf("\n 3.Multiplicación Basica\n");
                    printf("\n 4.División Basica\n");
                    printf("\n 5.No. Mayor o Menor\n");
                    printf("\n 6.División o Multiplicación\n");
                    printf("\n 7.Identificador de letras\n");
                    printf("\n 8.Suma con while\n");
                    printf("\n 9.Suma con if\n");
                    printf("\n 10.Factorial\n");
                    printf("\n 11.Multiplicación con for\n");
                    printf("\n 12.Cadena\n");
                    printf("\n 13.Matriz\n");
                    printf("\n 14.Multiplicación de matrices\n");
                    printf("\n 15. Si desea salir del Menu.\n");
                    printf("\n Ingrese el numero del programa que desea usar:\n");
                    scanf("%i",&op);
                    switch (op) {
                        case 1:Header1();
                            break;
                        case 2:Header2();
                            break;
                        case 3:Header3();
                            break;
                        case 4:Header4();
                            break;
                        case 5:Header5();
                            break;
                        case 6:Header6();
                            break;
                        case 7:Header7();
                            break;
                        case 8:Header8();
                            break;
                        case 9:Header9();
                            break;
                        case 10:Header10();
                            break;
                        case 11:Header11();
                            break;
                        case 12:Header12();
                            break;
                        case 13:Header13();
                            break;
                        case 14:Header14();
                            break;
                        case 15:printf("\nGracias por usar el Menu.\n");
                            return 0;
                        default:
                            break;
                    };
                    break;
                case 2:printf("Gracias por usar el menu.");
                    break;
                default:
                    break;
            }
            }
            break;
        case 2:printf("Gracias por usar el menu.");
            break;
            default:
            break;
    }
    
    return 0;
    
}




