//
//  main.c
//  exercicio_1
//
//  Created by Aline Souza Cruz on 02/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Faça um programa em C que calcule a média ponderada de 3 números reais (A,B e C)  mostre o resultado onde os pesos serão (2,3,5)*/
    float A, B, C, media;
    printf("Digite três valores para cálculo da média ponderada: \n");
    scanf("%f %f %f", &A, &B, &C);
    media = (A*2 + B*3 + C*5)/10;
    printf("O valor da média é  = %f", media);
    return(0);
    
}
