//
//  main.c
//  Maria Fernanda Barroso Monroy
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header11.h"

int main() {
    
    printf("Programa 11. - Multiplicación con for. \n");
    
    int i,num;
    printf("Introduzca numero a multiplicar:\n");
    scanf("%d",&num);
    for (i=1; i<=10; i++)
        printf("\n %d * %d = %d \n", i,num, i *num);
    
    return 0;
}

