//
//  Header13.h
//  Programa 13
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header13_h
#define Header13_h
int Header13() {
    
    printf("\nPrograma 13. \n- Matrices. \n");
    
    int Matriz[3][3],f,c;
    for(f=0;f<3; f++){
        for(c=0; c<3; c++){
            printf("\nDe la fila #%d, agregue valor #%d: \n",f+1, c+1);
            scanf("%d",&Matriz[f][c]);
        }
        for(c=0; c<3; c++){
            printf("%d",Matriz[f][c]);
        }
        printf("\n");
    }
    return 0;
}

#endif /* Header13_h */
