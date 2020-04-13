#include <stdio.h>
#include <stdlib.h>

/* 
3- Faça um laço que calcule a media de todos os números informados, 
a condição de termino do laço e quando for digitado ZERO
*/

int main(int argc, char *argv[]) {	
	float numero, media=0, cont=0;
	// faça enquanto  ou enquanto faça
	do {
		printf("Informe um numero:");
		scanf("%f", &numero);
		if(numero != 0){
			media = media + numero;
			cont++; // cont = cont+1
		}							
	} while(numero !=0);
	media = media / cont;
	printf("A media = %f", media);
	return 0;
}
