//
//  main.c
//  Practica 46
//  Maria Fernanda Barroso Monroy
//  Created by Fer on 02/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[26];
    int total;
    printf("Introduce una oración: (Max. 25 caracteres)\n");
    gets(cadena);
    total = strlen(cadena);
    printf("La longitud de la cadena es: %d \n", total);
    return 0;
}
