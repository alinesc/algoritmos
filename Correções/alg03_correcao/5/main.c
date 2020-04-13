#include <stdio.h>
#include <stdlib.h>

/* 
Faça um programa em C que dada uma distancia em km converta e 
exiba em milhas, onde 1Milha = 1,60934km
*/

int main(int argc, char *argv[]) {
	float k, m;
	//entrada de dados
	printf("Informe o valor em km:");
	scanf("%f", &k);
	//processamento
	m = k / 1.60934;
	//saida
	printf("O valor de %f km em milhas=%f", k, m);

	return 0;
}
