#include <stdio.h>
#include <stdlib.h>

/* Leia o salario de um trabalhador e o valor da presta��o de um empr�stimo. Se a
presta��o for maior que 20% do salario imprima:  Empr�stimo n�o concedido, caso contrario imprima:  Empr�stimo concedido. */

int main(int argc, char *argv[]) {
	float salario, prestacao;
	printf("Digite o salario: ");
	scanf("%f", &salario);
	printf("Digite a prestacao: ");
	scanf("%f", &prestacao);
	if(prestacao > salario*0.2){
		printf("Emprestimo nao concedido.");
	}
	else{
		printf("Emprestimo concedido");
	}
	
	
	return 0;
}
