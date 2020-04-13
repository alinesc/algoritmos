#include <stdio.h>
#include <stdlib.h>

/* 
1) fa�a um algoritmo que simule o funcionamento de um caixa eletr�nico,
 onde ser� apresentado uma lista de opera��es:

1-Saldo
2-Saque
3-Deposito
Ao iniciar o programa determine um valor inicio para a vari�vel saldo,
 se o cliente escolher a op��o 1 mostre o valor do saldo, 
 caso escolha o valor 2 
 	leia o valor a ser sacado e verifique 
	 se existe saldo suficiente, 
	 se o saldo for maior ou igual , 
	 	deduza da vari�vel saldo o valor solicitado, 
		 caso n�o haja saldo suficiente mostre a mensagem 
		 �Saldo Insuficiente�, 
caso a op��o 3 seja escolhida adicione o 
valor informado de deposito ao saldo.
 */

int main(int argc, char *argv[]) {
	float valor, saldo = 500;
	int op; //1-Saldo 2-Saque 3-Deposito
	
	printf("Informe a operacao\n 1-Saldo 2-Saque 3-Deposito:");
	scanf("%i", &op);
	
	switch(op){
		case 1:{ //mostrar saldo
			printf("O seu saldo = %f", saldo);
			break;
		}
		case 2:{
			printf("Informe o valor a ser sacado:");
			scanf("%f", &valor);
			if(valor > saldo){
				printf("Saque nao realizao, saldo indisponivel!");	
			} else {
				saldo = saldo - valor;
				printf("Saque realizado, saldo atual=%f", saldo);	
			}
			break;
		}
		case 3:{
			printf("Informe o valor a ser depositado:");
			scanf("%f", &valor);
			saldo = saldo + valor;
			printf("Deposito realizado, saldo atual=%f", saldo);
			break;
		}
		default:{
			printf("Operacao nao cadastrada!");
			break;
		}
	}
	
	return 0;
}
