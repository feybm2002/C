//
//  main.c
//  Practica 60
//  Maria Fernanda Barroso Monroy
//  Created by Fer on 01/12/21.
//  Copyright © 2021 Fey . All rights reserved.
//

#include <stdio.h>
#define TAM 100

int ordenar(int n, int x[]);

int main() {
    int i, n, x[TAM];
    printf("¿Cuántos números serán introducidos?\n");
    scanf("%i",&n);
    for(i=0;i<n;++i){
        printf("i=%d x=",i+1);
        scanf("%d",&x[i]);
    }
    ordenar(n,x);
    printf("lista de números ordenada\n");
    for(i=0;i<n;++i)
        printf("i=%d x=%d\n",i+1, x[i]);
    
    return 0;
}

int ordenar(int n, int x[]){
    int i, elem, temp;
    for(elem=0;elem<n;++elem)
        for(i=elem + 1; i<n; ++i)
            if(x[i]<x[elem])
            {
                temp=x[elem];
                x[elem]=x[i];
                x[i]=temp;
            }
    return 0;
}
