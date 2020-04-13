#include <stdio.h>
#include <stdlib.h>

/* 
b-Crie dois vetores do tipo inteiro com a capacidade de 10 posições,
leia números que serão armazenados sequencialmente 
no primeiro vetor, faça um novo laço que armazene no segundo 
vetor o valor do primeiro multiplicado por 2 quando 
o índice for par, e multiplique por 3 quando o índice for impar.
*/

int main(int argc, char *argv[]) {
	int vetA[10];
	int vetB[10];
	int resto2, x;
	
	for(x=0;x<10;x++){
		printf("Informe um valor:");
		scanf("%i", &vetA[x]);	//x => 0..9
	}
	for(x=0;x<10;x++){
		resto2 = x%2; //resto da divisao inteira
		if(resto2==0){
			vetB[x] = vetA[x]*2;	
		} else {
			vetB[x] = vetA[x]*3;	
		}	
		printf("vetA[%i]=%i => vetB[%i]=%i \n", x, vetA[x], x, vetB[x]);
	}
	return 0;
}
