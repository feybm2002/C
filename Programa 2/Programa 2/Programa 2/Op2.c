//
//  main.c
//  D35,BarrosoMonroyMariaFernanda,Programa2
//  Programa de resta de dos digitos
//  Created by Fey  on 25/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header2.h"

int main()

{
    printf("Programa 2. - Resta Basica.\n");
    
    printf("Programa para restar dos digitos:\n");
    int A,B,Resultado;
    printf("Ingrese su primer digito:");
    scanf("%i",&A);
    printf("Ingrese su segundo digito a restar:");
    scanf("%i",&B);
    Resultado = A - B;
    printf("El resultado de su resta es:%i\n",Resultado);
    
    return 0;
}
