#include <stdio.h>
#include <stdlib.h>

/* 
4-Faça um programa em C que leia Três valores: 
Distancia em km, Velocidade Media e consumo de Combustível de um carro, 
calcule o tempo de viagem e 
quantos litros de combustível serão necessários para completar a viagem.
*/

int main(int argc, char *argv[]) {
	float distancia, consumo, velocidade;
	float litros, tempo;
	//entrada de dados
	printf("Informe a distancia em km:");
	scanf("%f", &distancia);
	printf("Informe o consumo de combustivel:");
	scanf("%f", &consumo);
	printf("Informe a velocidade media:");
	scanf("%f", &velocidade);
	//processamento
	tempo = distancia/velocidade;
	litros = distancia/consumo;
	//saida da informação
	printf("O tempo gasto =%f horas, e gastara %f litros", tempo, litros);
	
	return 0;
}
