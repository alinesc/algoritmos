#include <stdio.h>
#include <stdlib.h>

/* 
Elabore um algoritmo que gere e escreva os 
n�meros �mpares dos n�meros entre 100 e 200.
*/

int main(int argc, char *argv[]) {
	int numero, resto;
	// La�a determinado Fa�a Ate X ... Y
	for(numero=100;numero<=200;numero++){
		// Modulo => resto da divisao inteira	
		resto = numero % 2; 
		if(resto==1){
			printf("%i ", numero);	
		}
	}
	return 0;
}
