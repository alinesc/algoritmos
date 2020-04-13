//
//  main.c
//  exercicio_3
//
//  Created by Aline Souza Cruz on 02/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Faça um programa em C que dada uma distância em km converta e exiba em milhas, onde 1Milha = 1,60934km */
    float km, mi;
    printf("Digite uma distância em km: ");
    scanf("%f", &km);
    mi = km / 1.60934;
    printf("O valor de %f km em milhas é de %f.", km, mi);
    return 0;
}
