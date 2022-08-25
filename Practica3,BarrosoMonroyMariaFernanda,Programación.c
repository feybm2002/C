//
//  main.c
//  Practica3
//
//  Created by Fey  on 24/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//  Maria Fernanda Barroso Monroy

#include <stdio.h>

int main()

{
float materia1,materia2,materia3,promedio;
    printf("Ingrese la calificación de la primera materia:\n");
    scanf("%f",&materia1);
    printf("Ingrese la calificación de la segunda materia:\n");
    scanf("%f",&materia2);
    printf("Ingrese la calificación de la tercera materia:\n");
    scanf("%f",&materia3);
    promedio = materia1 + materia2 + materia3;
    promedio = promedio/3;
    printf("El promedio final es:%f\n",promedio);
    
    
    return 0;
}
