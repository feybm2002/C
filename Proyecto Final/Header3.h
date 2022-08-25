//
//  Header.h
//  Programa 3
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header3_h
#define Header3_h
int Header3()
{
    printf("\nPrograma 3. \n- Multiplicación Basica. \n");
    
    printf("\nPrograma para multiplicar dos digitos:\n");
    int A,B,Resultado;
    printf("\nIngrese su primer digito a multiplicar:\n");
    scanf("%i",&A);
    printf("\nIngrese su segundo digito a multiplicar:\n");
    scanf("%i",&B);
    Resultado = A * B;
    printf("\nEl resultado de su multiplicación es:%i\n\n",Resultado);
    return 0;
}

#endif /* Header_h */
