//
//  Header11.h
//  Programa 11
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header11_h
#define Header11_h
int Header11() {
    
    printf("\nPrograma 11. \n- Multiplicación con for. \n");
    
    int i,num;
    printf("\nIntroduzca numero a multiplicar:\n");
    scanf("%d",&num);
    for (i=1; i<=10; i++)
        printf("\n %d * %d = %d \n", i,num, i *num);
    
    return 0;
}

#endif /* Header11_h */
