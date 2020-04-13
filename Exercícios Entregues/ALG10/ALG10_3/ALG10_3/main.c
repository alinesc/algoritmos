//
//  main.c
//  ALG10_3
//
//  Created by Aline Souza Cruz on 11/11/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float vetor[20];
    float media = 0;
    float maior, menor;
    int cont;
    
    for(cont=0;cont<20; cont++){
        printf("Informe um valor:");
        scanf("%f", &vetor[cont]);
        media = media + vetor[cont];
    }
    media = media / 20;
    for(cont=0;cont<20; cont++){
        if(cont==0){
            menor= vetor[cont];
            maior= vetor[cont];
        } else {
            if(vetor[cont] < menor){
                menor = vetor[cont];
            }
            if(vetor[cont] > maior){
                maior = vetor[cont];
            }
        }
    }
    
    
    printf("Media = %f \n", media);
    printf("Maior = %f, Menor = %f \n", maior, menor);
    
    
    return 0;
}
