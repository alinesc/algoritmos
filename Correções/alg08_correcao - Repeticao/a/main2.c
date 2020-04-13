#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, contador=0, menor, maior;
	float media = 0;
	
	do{ //1..N
		printf("Informe um numero:");
		scanf("%i", &x);
		if(x!=0){
			media = media + x;
			contador = contador + 1;
			if(contador==1){
				maior = x;
				menor = x;	
			} else {			
				if(x > maior){
					maior = x;	
				}
				if(x < menor){
					menor = x;	
				}
			}
		}		
	} while(x!=0);
	media = media/contador;
	printf("Menor=%d, Maior=%d, media=%f", menor, maior, media);
	return 0;
}
