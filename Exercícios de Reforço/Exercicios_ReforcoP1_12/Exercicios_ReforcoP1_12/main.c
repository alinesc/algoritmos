//
//  main.c
//  Exercicios_ReforcoP1_12
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salário imprima: Empréstimo não concedido, caso
contrário imprima:  Empréstimo concedido.
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float sal, pres;
    printf("Digite o salário do funcionário: ");
    scanf("%f", &sal);
    printf("Digite o valor da prestação: ");
    scanf("%f", &pres);
    if (sal * 0.2 < pres) {
        printf("Empréstimo não concedido.");
    }
    else {
        printf("Empréstimo concedido.");
    }
    return 0;
}
