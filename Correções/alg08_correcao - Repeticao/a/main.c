#include <stdio.h>
#include <stdlib.h>

/* 
A � Fa�a um algoritmo que implemente um la�o que leia X 
n�meros inteiros e identifique qual o menor o maior e a media,
quando o n�mero informado for zero, interrompa o la�o e 
exiba os valores.
*/

int main(int argc, char *argv[]) {
	int x, contador=0;
	int menor=9999999, maior=-9999999;
	float media = 0;
	
	do{ //1..N
		printf("Informe um numero:");
		scanf("%i", &x);
		if(x!=0){
			media = media + x;
			contador = contador + 1;
			if(x > maior){
				maior = x;	
			}
			if(x < menor){
				menor = x;	
			}
		}		
	} while(x!=0);
	media = media/contador;
	printf("Menor=%d, Maior=%d, media=%f", menor, maior, media);
	return 0;
}
