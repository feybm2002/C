//
//  main.c
//  Programa 6
//  Maria Fernanda Barroso Monroy D35
//  Created by Fey  on 01/09/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header6.h"

int main()
{
    printf("Programa 6. - División o Multiplicación.\n");
    
    printf("\nSi su valor No.1 es mayor se dividiran, en caso contrario se multiplicaran.\n \n Ingrese sus valores:");
    float valor1, valor2, Resultado;
    printf("\n \nIngrese su primer valor:");
    scanf("%f",&valor1);
    printf("\nIngrese si segundo valor:");
    scanf("%f",&valor2);
    if (valor1>valor2) {
        Resultado = valor1 / valor2;
        printf("\nLa división de estos valores es:\n %f \n",Resultado);
    }
    else if
        (valor1<valor2) {
            Resultado = valor1 * valor2;
            printf("\nLa multiplicación de estos valores es: \n %f \n", Resultado);
        }
    
    return 0;
}
