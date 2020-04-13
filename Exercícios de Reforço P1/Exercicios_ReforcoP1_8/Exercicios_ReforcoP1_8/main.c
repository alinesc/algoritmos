//
//  main.c
//  Exercicios_ReforcoP1_8
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Elabore um programa em C que leia as variáveis C e N, respectivamente código e número de horas trabalhadas de um operário. E calcule o salário sabendo-se que ele ganha R$ 10,00 por hora. Quando o número de horas exceder a 50 calcule o excesso de pagamento armazenando-o na variável E, caso contrário zerar tal variável. A hora excedente de trabalho vale R$ 20,00. No final do processamento imprimir o salário total e o salário excedente. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int C, N;
    float E, sal_tot; // c = código, n = número de horas trabalhadas, e = valor excedente
    printf("Digite o código do operário: ");
    scanf("%i", &C);
    printf("Digite o número de horas trabalhadas do operário: ");
    scanf("%i", &N);
    sal_tot = N * 10;
    if (N > 50) {
        E = (N - 50) * 20;
        printf("O valor do salário é R$ %f e o salario excedente é R$ %f", sal_tot, E);
    }
    else {
        E = 0;
        printf("O valor do salário é R$ %f e o salario excedente é R$ %f", sal_tot, E);
    }
    
    return 0;
}
