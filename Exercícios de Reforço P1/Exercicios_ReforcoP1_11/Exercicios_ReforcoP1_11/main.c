//
//  main.c
//  Exercicios_ReforcoP1_11
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Faca um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem Números iguais. */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);
    if (n1 == n2) {
        printf("Os números digitados são iguais.");
    }
    else if (n1 > n2) {
        printf("O primeiro número digitado é maior que o segundo. ");
    }
    else {
        printf("O segundo número digitado é maior que o primeiro. ");
    }
    return 0;
}
