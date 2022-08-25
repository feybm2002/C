//
//  Header.h
//  Programa 2
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header2_h
#define Header2_h
int Header2()

{
    printf("\nPrograma 2.\n- Resta Basica.\n");
    
    printf("\nPrograma para restar dos digitos:\n");
    int A,B,Resultado;
    printf("\nIngrese su primer digito:\n");
    scanf("%i",&A);
    printf("\nIngrese su segundo digito a restar:\n");
    scanf("%i",&B);
    Resultado = A - B;
    printf("\nEl resultado de su resta es:%i\n\n",Resultado);
    
    return 0;
}


#endif /* Header_h */
