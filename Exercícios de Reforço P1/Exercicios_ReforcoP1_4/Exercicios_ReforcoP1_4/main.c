//
//  main.c
//  Exercicios_ReforcoP1_4
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A formula de conversão  é: C = P ∗ 2, 54, sendo C o comprimento em centímetros e P o comprimento em polegadas. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float comp_cent, comp_pol;
    printf("Digite o comprimento em polegadas: ");
    scanf("%f", &comp_pol);
    comp_cent = comp_pol * 2.54;
    printf("O valor em centímetros é de : %f", comp_cent);
    return 0;
}
