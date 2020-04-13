#include <stdio.h>
#include <stdlib.h>

/* 
Leia o salario de um trabalhador e o valor da presta��o 
de um empr�stimo. Se a presta��o for maior que 20% do 
salario imprima:  Empr�stimo n�o concedido, 
caso contrario imprima:  Empr�stimo concedido.
*/

int main(int argc, char *argv[]) {
	float salario, emprestimo, percentual;
	printf("Informe o seu salario e o valor do emprestimo:");
	scanf("%f %f", &salario, &emprestimo);
	percentual = salario * 0.2; // (salario*20)/100
	if(percentual < emprestimo){
		printf("Emprestimo nao concedido %f", percentual);	
	} 
	else 
	{
		printf("Emprestimo concedido %f", emprestimo);	
	}
	return 0;
}
