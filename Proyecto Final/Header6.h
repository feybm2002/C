//
//  Header6.h
//  Programa 6
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header6_h
#define Header6_h
int Header6()
{
    printf("\nPrograma 6. \n- División o Multiplicación.\n");
    
    printf("\nSi su valor No.1 es mayor se dividiran, en caso contrario se multiplicaran.\n \n Ingrese sus valores:\n");
    float valor1, valor2, Resultado;
    printf("\n \nIngrese su primer valor:\n");
    scanf("%f",&valor1);
    printf("\nIngrese si segundo valor:\n");
    scanf("%f",&valor2);
    if (valor1>valor2) {
        Resultado = valor1 / valor2;
        printf("\nLa división de estos valores es:\n %f \n\n",Resultado);
    }
    else if
        (valor1<valor2) {
            Resultado = valor1 * valor2;
            printf("\nLa multiplicación de estos valores es: \n %f \n", Resultado);
        }
    
    return 0;
}

#endif /* Header6_h */
