//
//  main.c
//  Programa 13
//  Maria Fernanda Barroso Monroy
//  Created by Fey  on 24/10/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#include "Header13.h"

int main() {
    
    printf("Programa 13. - Matrices. \n");
    
    int Matriz[3][3],f,c;
    for(f=0;f<3; f++){
        for(c=0; c<3; c++){
            printf("De la fila #%d, agregue valor #%d: \n",f+1, c+1);
            scanf("%d",&Matriz[f][c]);
        }
        for(c=0; c<3; c++){
            printf("%d",Matriz[f][c]);
        }
        printf("\n");
    }
    return 0;
}
