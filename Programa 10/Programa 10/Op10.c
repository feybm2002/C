//
//  main.c
//  Programa 10
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 19/09/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header10.h"

int main() {
    
    printf("Programa 10. - Factorial.\n");
    
    int num1,num2,i,suma;
    printf("Ingresa el numero donde inicia la suma:\n");
    scanf("%i",&num1);
    printf("Ingrese el numero final de la suma:\n");
    scanf("%i",&num2);
    for (int i = num1; i <= num2; i++){
        if (i % 2 == 0){
            suma = suma + i;
            i++;
            printf("La suma es:\n %i \n",suma);
        }
      
    }
    return 0;
}
