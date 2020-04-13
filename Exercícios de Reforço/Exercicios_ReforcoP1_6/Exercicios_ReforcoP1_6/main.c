//
//  main.c
//  Exercicios_ReforcoP1_6
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Faça um algoritmo em C que receba um número inteiro e verifique se este e positivo ou negativo, exiba uma mensagem*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    if (n > 0) {
        printf("Esse número é positivo.");
    }
    else if (n == 0){
        printf("Esse número é zero.");
    }
    else {
    printf("Esse número é negativo.");
    }
    return 0;
}
