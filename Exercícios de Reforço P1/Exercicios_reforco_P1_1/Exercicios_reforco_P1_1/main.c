//
//  main.c
//  Exercicios_reforco_P1_1
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

/* 1-Faça um programa em C que leia a temperatura em graus Celsius e converta para Fahrenheit F = (9 * C + 160) / 5. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float tempC, tempF;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);
    tempF = (9 * tempC + 160)/5;
    printf("A temperatura em Fahrenheit é: %f", tempF);
    return 0;
}
