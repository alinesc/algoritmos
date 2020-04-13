//
//  main.c
//  exercicio_2
//
//  Created by Aline Souza Cruz on 02/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /* Faça um programa em C que leia três valores: distância em km, velocidade média e consumo de combustível de um carro. Calcule o tempo de viagem e quantos litros de combustível serão necessários para completar a viagem.*/
    float distancia, vm, consumo, tempo, litros;
    printf("Digite os valores para distância(em km), velocidade média (em km/h) e o consumo médio de combustível do carro: ");
    scanf("%f %f %f", &distancia, &vm, &consumo);
    tempo = distancia / vm;
    litros = distancia / consumo;
    printf("O carro completará a viagem em %f h e gastará %f litros para completar o percurso. ", tempo, litros);
    return 0;
}
