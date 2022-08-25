//
//  main.c
//  D35,BarrosoMonroyMariaFernanda,Programa3
//
//  Created by Fey  on 25/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header3.h"

int main()
{
    printf("Programa 3. - Multiplicación Basica. \n");
    
    printf("Programa para multiplicar dos digitos:\n");
    int A,B,Resultado;
    printf("Ingrese su primer digito a multiplicar:");
    scanf("%i",&A);
    printf("Ingrese su segundo digito a multiplicar:");
    scanf("%i",&B);
    Resultado = A * B;
    printf("El resultado de su multiplicación es:%i\n",Resultado);
    return 0;
}
