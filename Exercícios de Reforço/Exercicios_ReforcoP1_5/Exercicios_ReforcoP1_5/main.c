//
//  main.c
//  Exercicios_ReforcoP1_5
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Faca um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%.*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float v_prod, v_des;
    printf("Digite o valor do produto: ");
    scanf("%f", &v_prod);
    v_des = v_prod - (v_prod * 0.12);
    printf("O valor do produto com desconto é de: %f", v_des);
    return 0;
}
