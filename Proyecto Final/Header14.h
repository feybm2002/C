//
//  Header14.h
//  Programa 14
//
//  Created by Fer on 28/11/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#ifndef Header14_h
#define Header14_h

int Header14()
{

    printf("\nPrograma 14. \n- Multiplicación de matrices. \n");
    int col=3, fil=3;
    float a[fil][col],b[fil][col],c[fil][col];
    int i,j,k=1;
    printf("\nEste programa obtiene la multiplicacion de dos matrices de 3x3\n");
    for(i=1;i<=fil;i++)
        for(j=1;j<=col;j++)
        {
            printf("\nDame el elemento a(%d,%d) ",i,j);
            scanf("%f",&a[i][j]);
        }
    puts("\n");
    for(i=1;i<=fil;i++)
        for(j=1;j<=col;j++)
        {
            printf("\nDame el elemento b(%d,%d) ",i,j);
            scanf("%f",&b[i][j]);
        }
    for(i=0;i<fil;i++)
        for(j=0;j<col;j++)
        {
            c[i][j]=0;
            for(j=0;j<col;j++)
                c[i][j]+=a[i][k]*b[k][j];
        }
    for(i=1;i<=fil;i++)
    {
        printf("\n");
        for(j=1;j<=col;j++)
            printf("%g\t",c[i][j]);
    }
    return 0;
}


#endif /* Header14_h */
