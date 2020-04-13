#include <stdio.h>
#include <stdlib.h>

/* 
faça um algoritmo que implemente um vetor de 20 posições, 
leia as 20 posições e identifique em um novo laço, 
qual o maior e menor numero informado e qual a media 
dos números informados.
*/

int main(int argc, char *argv[]) {
	float numeros[20];
	float menor, maior, media=0;
	int x;
	
	for(x=0;x<20;x++){
		printf("Informe um numero:");
		scanf("%f", &numeros[x]);
	}
	for(x=0;x<20;x++){
		if(x==0){
			menor = numeros[x];
			maior = numeros[x];
		} else {
			if(numeros[x]<menor){
				menor = numeros[x];	
			}
			if(numeros[x]>maior){
				maior = numeros[x];	
			}			
		}	
		media = media + numeros[x];		
	}
	media = media / 20;
	printf("menor=%.2f, maior=%.2f, media=%.2f",menor, maior, media);
	
	return 0;
}
