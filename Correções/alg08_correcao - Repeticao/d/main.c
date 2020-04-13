#include <stdio.h>
#include <stdlib.h>

/* 
Faça um algoritmo que dado valor inteiro 
informado, calcule e exiba a tabuada 
do numero de 1 a 10
 */

int main(int argc, char *argv[]) {
	int numero, x, produto;
	printf("Informe um numero:");
	scanf("%i",&numero);
	//Faça Ate 1 a 10
	for(x=1;x<=10;x++){
		produto = x*numero;
		printf("%i X %i = %i \n", x, numero, produto);		
	}
	
	return 0;
}
