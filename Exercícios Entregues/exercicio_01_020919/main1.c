#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que receba um número inteiro, 
identifique se este e par ou impar, utilize o modulo de 2 para calcular o resto da divisão, 
se o resto da divisão for zero (o número e par) caso o resto da divisão for 1 (o número e impar)   
resto = numero % 2; */

int main(int argc, char *argv[]) {
	int num;
	printf("Digite um numero para saber se e par ou impar: ");
	scanf("%i", &num);
	if (num % 2 == 0){
		printf("O numero e par");
		}
	else {
		printf("O numero e impar");
	}
	
	return 0;
}
