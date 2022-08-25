//
//  main.c
//  Programa 9
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 18/09/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include<stdio.h>
#include "Header9.h"

int main(){
    printf("Programa 9. - Suma con if.\n");
    
    int num1, num2, inicio, fin, suma, i;
    suma = 0;
    
    printf("Ingresa el numero de inicio para la suma:\n");
    scanf("%i",&num1);
    printf("Ingresa el numero final de la suma;\n");
    scanf("%i",&num2);
    
    if(num1 > num2){
        inicio = num2;
        fin = num1;
    }
    
    else if(num1 < num2){
        inicio = num1;
        fin = num2;
    }
    
    i = inicio;
    do{
        suma =  suma + i;
        printf("%i +", i);
        i++;
    }
    while(i <= fin);
    printf("\n El resultado de la suma es:\n %i \n", suma);
    return 0;
}
