//
//  main.c
//  Practica4
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 24/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>

int main()
{
    float lado1,lado2,area;
    printf("Ingrese el lado 1 de su cuadrado:\n");
    scanf("%f",&lado1);
    printf("Ingrese el lado 2 de su cuadrado:\n");
    scanf("%f",&lado2);
    area = lado1 * lado2;
    printf("La area de tu cuadrado es:%f\n",area);
    
   
    return 0;
}
