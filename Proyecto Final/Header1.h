//
//  Header1.h
//  Programa 1
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header1_h
#define Header1_h

int Header1(){
    printf("\n Programa 1.\n - Suma Basica.\n");
    
    int A,B,Resultado;
    printf("\n Ingrese su primer digito:\n");
    scanf("%i",&A);
    printf("\n Ingrese su segundo digito:\n");
    scanf("%i",&B);
    Resultado=A+B;
    printf("\nLa suma de sus digitos es:%i\n\n",Resultado);
    return 0;
}

#endif /* Header_h */

