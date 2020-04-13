#include <stdio.h>
#include <stdlib.h>

/* 
8- Crie um algoritmo onde será informado um valor inteiro inicial,  
e um laço o usuário devera informar outro numero inteiro,
 o programa deverá responder se o numero atual e menor ou 
 maior que o numero inicial informado, o laço somente será 
 interrompido quando o numero atual for igual ao número anterior 
 informado. Exiba quantas tentativas foram necessárias para que o 
 numero fosse descoberto.
 */

int main(int argc, char *argv[]) {
	int numeroA, numeroB, cont=0;
	
	printf("Informe um numero para ser descoberto:");
	scanf("%i", &numeroA);
	system("cls");
	
	do
	{
		printf("Informe um numero :");
		scanf("%i", &numeroB);
		
		if(numeroA>numeroB){
			printf("E Maior q %i \n", numeroB);
			cont++;	
		} else {
			if(numeroA<numeroB){
				printf("E Menor q %i \n", numeroB);
				cont++;	
			} else {
				printf("ACERTOU em %i tentativas \n", cont);
			}				
		}						
	} while(numeroA != numeroB);
	
	
	
	return 0;
}
