#include <stdio.h>
#include <stdlib.h>

/* 
3- Fa�a um la�o que calcule a media de todos os n�meros informados, 
a condi��o de termino do la�o e quando for digitado ZERO
*/

int main(int argc, char *argv[]) {	
	float numero, media=0, cont=0;
	// fa�a enquanto  ou enquanto fa�a
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
