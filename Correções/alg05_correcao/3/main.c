#include <stdio.h>
#include <stdlib.h>

/* 
 A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3 grupos de ind�strias 
 que s�o altamente poluentes do meio ambiente. O �ndice de polui��o aceit�vel varia 
 de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as ind�strias do 1� grupo s�o intimadas a 
 suspenderem suas atividades, se o �ndice crescer para 0,4 as industrias do 1� e 2� grupo 
 s�o intimadas a suspenderem suas atividades, se o �ndice atingir 0,5 todos os grupos devem 
 ser notificados a paralisarem suas atividades. Fa�a um algoritmo em C que leia o �ndice 
 de polui��o medido e emita a notifica��o adequada aos diferentes grupos de empresas.

 */

int main(int argc, char *argv[]) {
	float indice;
	
	printf("Informe o indice:");
	scanf("%f", &indice);
	
	if(indice >= 0.3)
	{
		printf("industrias do 1 grupo \n");
		if(indice >= 0.4){
			printf("industrias do 2 grupo \n");	
			if(indice >= 0.5){
				printf("industrias do 3 grupo \n");		
			}
		}		
	} 
	else {
		printf("Tudo normal");	
	}
	
	
	return 0;
}
