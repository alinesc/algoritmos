//
//  main.c
//  Exercicios_ReforcoP1_13
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//
/* Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) – 58
Para mulheres: (62.1*h) – 44.7 (h = altura)
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float altura, peso, peso_ideal;
    char sexo;
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite M para sexo masculino ou F para feminino: ");
    scanf(" %c", &sexo);
    if (sexo == 'M'){
        peso_ideal = (72.7 * altura) - 58;
        if (peso <= peso_ideal) {
            printf("Você está no peso ideal.");
        }
        else {
            printf("Você não está no peso ideal.");
        }
    }
        else {
            peso_ideal = (62.1 * altura) - 44.7;
            if (peso <= peso_ideal) {
                printf("Você está no peso ideal.");
            }
            else {
                printf("Você não está no peso ideal.");
            }
        }
    return 0;
}
