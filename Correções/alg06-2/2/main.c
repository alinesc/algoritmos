#include <stdio.h>
#include <stdlib.h>

/* 
2-Faça um programa em C que verifique se o ano é bissexto ou não. 
Se ele não for bissexto, indique quanto tempo falta para o próximo bissexto.

Para ser bissexto, o ano deve ser:
Divisível por 4. Sendo assim, a divisão é exata com o resto igual a zero;
Não pode ser divisível por 100. Com isso, a divisão não é exata, ou seja,
deixa resto diferente de zero;
Pode ser que seja divisível por 400.
*/

int main(int argc, char *argv[]) {
	int ano, resto4, resto100, resto400, faltam, proximo;
	//entrada
	printf("Informe o ano:");
	scanf("%i", &ano);
	//processamento
	resto4 = ano % 4;
	if(resto4==0){
		resto100 = ano % 100; 
		resto400 = ano % 400; 
		if(resto100==0 && resto400!=0)
		{								
			faltam = 4 - resto4;
			proximo = ano + faltam;
			printf("ano nao e bissexto %i faltam %i em %i", ano, faltam, proximo);				
		} 
		else 
		{
			printf("ano bissexto %i", ano);
		}
	} 
	else {
		faltam = 4 - resto4;
		proximo = ano + faltam;
		printf("ano nao e bissexto %i faltam %i em %i", ano, faltam, proximo);					
	}	
	
	return 0;
}
