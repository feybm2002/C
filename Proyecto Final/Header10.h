//
//  Header10.h
//  Programa 10
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header10_h
#define Header10_h
int Header10() {
    
    printf("\nPrograma 10. \n- Factorial.\n");
    
    int num1,num2,i,suma;
    printf("\nIngresa el numero donde inicia la suma:\n");
    scanf("%i",&num1);
    printf("\nIngrese el numero final de la suma:\n");
    scanf("%i",&num2);
    for (int i = num1; i <= num2; i++){
        if (i % 2 == 0){
            suma = suma + i;
            i++;
            printf("\nLa suma es:\n %i \n",suma);
        }
        
    }
    return 0;
}

#endif /* Header10_h */
