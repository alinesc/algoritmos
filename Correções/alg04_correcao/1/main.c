#include <stdio.h>
#include <stdlib.h>

/* 
Faça um algoritmo que receba um número inteiro, 
identifique se este e par ou impar, utilize o modulo 
de 2 para calcular o resto da divisão, 
se o resto da divisão for zero (o número e par) 
caso o resto da divisão for 1 (o número e impar)   
resto = numero % 2;
*/

int main(int argc, char *argv[]) {
	int numero, resto;
	
	printf("Informe um numero:");
	scanf("%i",&numero);
	//modulo => resto da divisao de um numero inteiro
	resto = numero % 2;
	if(resto==0){
		printf("Numero e par");	
	} 
	else{
		printf("numero e impar");	
	}
	
	return 0;
}
