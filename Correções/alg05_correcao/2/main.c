#include <stdio.h>
#include <stdlib.h>

/* 
Informe dois números reais e um número inteiro que represente a operação matemática 
a ser realizada (1-soma, 2-subtração, 3- multiplicação, 4-divisão) 
utilize o comando seleção aninhado e exiba o resultado da operação matemática escolhida.
*/

int main(int argc, char *argv[]) {
	float a,b, resultado;
	int op;
	//entrada
	printf("Informe dois numeros:\n");
	scanf("%f %f", &a, &b);
	printf("1-soma, 2-subtrair, 3-multiplicar, 4-divir :\n");
	scanf("%i", &op);
	//processamento
	if(op==1){
		resultado=a+b;
	} 
	else 
	{
		if(op==2){
			resultado = a -b;	
		}
		else {
			if(op==3){
				resultado = a*b;
			} 
			else
			{
				resultado = a/b;	
			}	
		}	
	}
	printf("O resultado = %f \n", resultado);
	
	return 0;
}
