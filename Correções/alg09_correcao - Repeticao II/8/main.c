#include <stdio.h>
#include <stdlib.h>

/* 
8- Crie um algoritmo onde ser� informado um valor inteiro inicial,  
e um la�o o usu�rio devera informar outro numero inteiro,
 o programa dever� responder se o numero atual e menor ou 
 maior que o numero inicial informado, o la�o somente ser� 
 interrompido quando o numero atual for igual ao n�mero anterior 
 informado. Exiba quantas tentativas foram necess�rias para que o 
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
