#include <stdio.h>
#include <stdlib.h>

/* Leia o salario de um trabalhador e o valor da prestação de um empréstimo. Se a
prestação for maior que 20% do salario imprima:  Empréstimo não concedido, caso contrario imprima:  Empréstimo concedido. */

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
