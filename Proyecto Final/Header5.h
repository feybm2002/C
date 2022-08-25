//
//  Header.h
//  Programa 5
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header5_h
#define Header5_h
int Header5() {
    
    printf("\nPrograma 5. \n- No. Mayor o Menor\n");
    
    int digito1, digito2;
    printf("\nIngrese su primer digito:\n");
    scanf("%i",&digito1);
    printf("\nIngrese su segundo digito:\n");
    scanf("%i",&digito2);
    if (digito1>digito2)
        printf("\nEl numero mayor es:%i \nEl numero menor es: %i\n\n",digito1,digito2);
    return 0;
}

#endif /* Header_h */
