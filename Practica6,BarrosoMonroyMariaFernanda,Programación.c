//
//  main.c
//  Practica6
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 24/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>

int main()
{
    float pi,radio,area;
    pi = 3.1415;
    printf("Ingrese el radio de su circulo:\n");
    scanf("%f",&radio);
    area = pi * ( radio * radio );
    printf("El area del circulo es:%lf\n",area);
    
    return 0;
   
}

