//
//  main.c
//  Practica7
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 24/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>

int main()
{
    printf("Ingrese los valores de su trapecio para sacar el area:\n");
    float base1, base2, altura,area;
    printf("Ingrese el valor de su primera base:\n");
    scanf("%f",&base1);
    printf("Ingrese el valor de su segunda base:\n");
    scanf("%f",&base2);
    printf("Ingrese la altura:\n");
    scanf("%f",&altura);
    area = ( base1 + base2 ) * altura / 2;
    printf("La area de su trapecio es:%f\n",area);
    return 0;
    
}
