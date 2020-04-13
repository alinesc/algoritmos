#include <stdio.h>
#include <stdlib.h>

/* 
4- faça um laço “faça até” com 10 interações, 
verifique quantas vezes números múltiplos de 2 e de 3
 são informados
*/

int main(int argc, char *argv[]) {
	int x, numero, resto2, resto3;
	
	for(x=1;x<=10;x++){
		printf("Informe um numero:");
		scanf("%i", &numero);	
		resto2 = numero % 2; //modulo de 2
		resto3 = numero % 3; //modulo de 3 - resto da divisao inteira
		if(resto2==0 && resto3==0){
			printf("Multiplo por 2 e 3 => %i \n", numero);
		}		
	}
	
	return 0;
}
