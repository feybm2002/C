//
//  Header12.h
//  Programa 12
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header12_h
#define Header12_h
int Header12() {
    
    printf("\nPrograma 12. \n- Cadena. \n");
    
    char nombre[3][40], apellidop[3][40],apellidom[3][40];
    int i;
    for(i=1;i<=3;i++)
    {
        printf("\nDame tu nombre:\n (%i)? ",i);
        scanf("%s",&nombre[i]);
        printf("\nDame tu apellido paterno:\n (%i)? ",i);
        scanf("%s",&apellidop[i]);
        printf("\nDame tu apellido materno:\n (%i)? ",i);
        scanf("%s",&apellidom[i]);
    }
    for(i=1;i<=3;i++)
        printf("%i \n Nombre completo del Alumno: \n %s %s %s \n",i, nombre[i],&apellidop[i], &apellidom[i]);
    
    return 0;
}

#endif /* Header12_h */
