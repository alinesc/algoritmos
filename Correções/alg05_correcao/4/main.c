#include <stdio.h>
#include <stdlib.h>

/* 
Elabore um algoritmo que dada a idade de um nadador 
classifique-o em uma das seguintes categorias:
Infantil A = 5 a 7 anos
Infantil B = 8 a 11 anos
Juvenil A = 12 a 13 anos
Juvenil B = 14 a 17 anos
Adultos = Maiores de 18 anos
 */

int main(int argc, char *argv[]) {
	int idade;
	
	printf("Informe a idade:");
	scanf("%i", &idade);
	
	if(idade >=5 && idade <=7){
		printf("Infantil A = 5 a 7 anos");		
	} 
	else 
	{
		if(idade >=8 && idade <=11){	
			printf("Infantil B = 8 a 11 anos");	
		}
		else 
		{
			if(idade >=12 && idade <=13){	
				printf("Juvenil A = 12 a 13 anos");	
			} 
			else {
				if(idade >=14 && idade <=17){	
					printf("Juvenil B = 14 a 17 anos");	
				} else {
					if(idade >=18){	
						printf("Adultos = Maiores de 18 anos");	
					} else {
						printf("Morre afogado");	
					}	 					
				}
			}
		}				
	}
	
	return 0;
}
