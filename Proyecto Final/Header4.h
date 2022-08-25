//
//  Header.h
//  Programa 4
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header4_h
#define Header4_h
int Header4()
{
    printf("\nPrograma 4. \n- División Basica.\n");
    
    printf("\nPrograma para hacer una división de dos digitos:\n");
    int A,B,Resultado;
    printf("\nIngrese su digito a dividir:\n");
    scanf("%i",&A);
    printf("\nIngrese su digito divisor:\n");
    scanf("%i",&B);
    Resultado = A / B;
    printf("\nEl resultado de su división es:%i\n\n",Resultado);
    
    return 0;
}

#endif /* Header_h */
