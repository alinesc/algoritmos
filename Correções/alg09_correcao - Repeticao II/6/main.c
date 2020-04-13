#include <stdio.h>
#include <stdlib.h>

/* 
6 �  Uma rainha requisitou os servi�os de um monge e disse-lhe 
que pagaria qualquer pre�o. O monge, necessitando de alimentos , 
indagou � rainha sobre o pagamento, se poderia ser feito com gr�os 
de trigo dispostos em um tabuleiro de 64 casas, 
de tal forma que o primeiro quadro deveria conter apenas um gr�o e 
os quadros subsequentes , o dobro do quadro anterior. 
A rainha achou o trabalho barato e pediu que o servi�o 
fosse executado, sem se dar conta de que seria imposs�vel 
efetuar o pagamento. Fa�a um algoritmo para calcular o n�mero 
de gr�os que o monge esperava receber.
100.000 graos = 1kg
*/

int main(int argc, char *argv[]) {
	float graos=1, kg;
	int x;
	
	for(x=1; x<64; x++){
		graos = graos + (graos*2);			
	}
	printf("Total de graos=%f \n", graos);
	kg = graos / (100000*1000);
	printf("toneladas=%f \n", kg);
	return 0;
}
