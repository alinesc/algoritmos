#include <stdio.h>
#include <stdlib.h>

/* 
Fa�a um algoritmo que receba um n�mero inteiro, 
identifique se este e par ou impar, utilize o modulo 
de 2 para calcular o resto da divis�o, 
se o resto da divis�o for zero (o n�mero e par) 
caso o resto da divis�o for 1 (o n�mero e impar)   
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
