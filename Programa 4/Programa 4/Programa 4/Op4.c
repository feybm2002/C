//
//  main.c
//  Programa4,BarrosoMonroyMariaFernanda,D35
//  Programa de división de dos digitos.
//  Created by Fey  on 25/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header4.h"

int main()
{
    printf("Programa 4. - División Basica.\n");
    
    printf("Programa para hacer una división de dos digitos:\n");
    int A,B,Resultado;
    printf("Ingrese su digito a dividir:");
    scanf("%i",&A);
    printf("Ingrese su digito divisor:");
    scanf("%i",&B);
    Resultado = A / B;
    printf("El resultado de su división es:%i\n",Resultado);
    
    return 0;
}
