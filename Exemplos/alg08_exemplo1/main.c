#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont  = 0;
	int num   = 0;
	int maior = 0;
	int menor = 999;

	//enquanto fa�a 0 a N repeti��es
	while(cont < 10)
	{
		scanf("%d", &num);	
		if(num > maior){
			maior = num;	
		}		
		cont = cont + 1;
	}
	printf("O maior numero informado foi %d \n", maior);
	
	cont = 0;
	//fa�a enquanto 1 a N repeti��es
	do
	{
	   scanf("%d", &num);	
	   if(num < menor){
			menor = num;	
	   }						
	   printf("Deseja Continuar 0-nao 1-sim:");
	   scanf("%d", &cont);	
	} while(cont==1); 
	printf("O menor numero informado foi %d \n", menor);
	
	//Fa�a ate de X a Y
	cont = 0;
	for(cont=3; cont <=30; cont++){
		num = cont * cont;
		printf("%d => %d \n", cont, num);	
	}
	
	//decrescente
	for(cont=30; cont >= 0; cont--)
	{		
		printf("%d \n", cont);	
	}

	//multiplos
	for(cont=0; cont < 20; cont+=3)
	{		
		printf("%d \n", cont);	
	}


	
	return 0;
}
