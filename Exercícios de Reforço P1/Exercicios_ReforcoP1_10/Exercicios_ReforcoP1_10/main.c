//
//  main.c
//  Exercicios_ReforcoP1_10
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele recebeu um aumento de 25%. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float sal, sal_reaj;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &sal);
    sal_reaj = sal + (sal * 0.25);
    printf("O salário reajustado será de R$ %f", sal_reaj);
    return 0;
}
