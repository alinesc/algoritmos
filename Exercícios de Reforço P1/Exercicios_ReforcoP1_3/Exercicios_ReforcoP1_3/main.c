//
//  main.c
//  Exercicios_ReforcoP1_3
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

/* Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de conversão é: K = 1. 61 ∗ M, sendo K a distância em quilômetros e M em milhas. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float d_mil, d_km;
    printf("Digite a distância em milhas: ");
    scanf("%f", &d_mil);
    d_km = 1.61 * d_mil;
    printf("A distância em quilômetros é de: %f", d_km);
    return 0;
}
