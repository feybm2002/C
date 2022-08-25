//
//  main.c
//  Programa 12
//  Maria Fernanda Barroso Monroy 
//  Created by Fey  on 03/10/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header12.h"

int main() {
    
    printf("Programa 12. - Cadena. \n");
    
    char nombre[3][40], apellidop[3][40],apellidom[3][40];
    int i;
    for(i=1;i<=3;i++)
    {
        printf("Dame tu nombre: (%i)? ",i);
        scanf("%s",&nombre[i]);
        printf("Dame tu apellido paterno: (%i)? ",i);
        scanf("%s",&apellidop[i]);
        printf("Dame tu apellido materno: (%i)? ",i);
        scanf("%s",&apellidom[i]);
    }
     for(i=1;i<=3;i++)
        printf("%i \n Nombre completo del Alumno: \n %s %s %s \n",i, nombre[i],&apellidop[i], &apellidom[i]);
    
    return 0;
}
