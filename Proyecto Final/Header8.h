//
//  Header8.h
//  Programa 8
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header8_h
#define Header8_h
int Header8()
{
    printf("\nPrograma 8. \n- Suma con while.\n");
    
    int num,i,suma;
    i=1;
    suma=0;
    printf("\nIngrese la cantidad de numeros a sumar:\n");
    scanf("%i",&num);
    while (i<=num)
    {
        suma= suma+i;
        i++;
    }
    printf("%i",suma);
    printf("\n Fin de la suma de los digitos.\n");
    return 0;
}

#endif /* Header8_h */
