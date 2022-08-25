//
//  Header9.h
//  Programa 9
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header9_h
#define Header9_h
int Header9(){
    printf("\nPrograma 9. \n- Suma con if.\n");
    
    int num1, num2, inicio, fin, suma, i;
    suma = 0;
    
    printf("\nIngresa el numero de inicio para la suma:\n");
    scanf("%i",&num1);
    printf("\nIngresa el numero final de la suma;\n");
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

#endif /* Header9_h */
