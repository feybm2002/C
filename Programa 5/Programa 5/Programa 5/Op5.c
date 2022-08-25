//
//  main.c
//  Programa 5
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 30/08/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header5.h"

int main() {
    
    printf("Programa 5. - No. Mayor o Menor\n");
    
    int digito1, digito2;
    printf("Ingrese su primer digito:");
    scanf("%i",&digito1);
    printf("Ingrese su segundo digito:");
    scanf("%i",&digito2);
    if (digito1>digito2)
        printf("El numero mayor es:%i \nEl numero menor es: %i\n",digito1,digito2);
    return 0;
}
