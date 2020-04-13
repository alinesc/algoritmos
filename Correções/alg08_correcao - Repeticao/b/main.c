#include <stdio.h>
#include <stdlib.h>

/* 
Reutilizando o algoritmo do caixa eletrônico,
implemente um laço faça enquanto que verifique se 
o usuário deseja continuar, caso a variável coletada 
for igual 1 reinicie o laço, mantendo o valor do saldo.
*/

int main(int argc, char *argv[]) {
	int continua;
	float valor, saldo = 500;
	int op; //1-Saldo 2-Saque 3-Deposito
		
	
	do{ //1 a N indeterminado Faça Enquanto
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
	
		//programa do caixa eletronico	
		printf("\n\ndeseja continuar 1-Sim 0-Nao: ");
		scanf("%i", &continua);	
		system("cls");
	} while(continua==1);
	
	return 0;
}
