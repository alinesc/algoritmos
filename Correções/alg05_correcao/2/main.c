#include <stdio.h>
#include <stdlib.h>

/* 
Informe dois n�meros reais e um n�mero inteiro que represente a opera��o matem�tica 
a ser realizada (1-soma, 2-subtra��o, 3- multiplica��o, 4-divis�o) 
utilize o comando sele��o aninhado e exiba o resultado da opera��o matem�tica escolhida.
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
