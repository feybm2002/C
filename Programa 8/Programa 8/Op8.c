//
//  main.c
//  Programa 8
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 09/09/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header8.h"

int main()
{
    printf("Programa 8. - Suma con while.\n");
    
    int num,i,suma;
    i=1;
    suma=0;
    printf("Ingrese la cantidad de numeros a sumar:\n");
    scanf("%i",&num);
    while (i<=num)
    {
        suma= suma+i;
        i++;
    }
    printf("%i",suma);
    printf("\n Fin de la suma de los digitos.\n");
    return 0;
}
