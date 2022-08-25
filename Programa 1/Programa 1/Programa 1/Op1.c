//
//  main.c
//  Programa 1
//  Maria Fernanda Barroso Monroy
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header1.h"

int main()
{
    printf("Programa 1. - Suma Basica.\n");
    
    int A,B,Resultado;
    printf("Ingrese su primer digito:");
    scanf("%i",&A);
    printf("Ingrese su segundo digito:");
    scanf("%i",&B);
    Resultado=A+B;
    printf("La suma de sus digitos es:%i\n",Resultado);
    
    
}

