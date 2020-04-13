#include <stdio.h>
#include <stdlib.h>

/* 
3-Leia a velocidade máxima permitida em uma avenida e a velocidade com 
que o motorista estava dirigindo nela. Calcule e mostre a multa que uma
pessoa vai receber, sabendo que são pagos: R$ 50 reais se o motorista 
ultrapassar em até 10km/h a velocidade permitida; R$ 100 reais, 
se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida; 
e R$ 200 reais, se estiver acima de 31km/h da velocidade permitida.
*/

int main(int argc, char *argv[]) {
	int via, veiculo, diferenca;
	float multa;
	//entrada
	printf("Informe velocidade via, e do veiculo:");
	scanf("%i %i", &via, &veiculo);
	//processamento
	diferenca = veiculo - via;
	if(diferenca > 0){
		if(diferenca <= 10){
			multa = 50.00;
			printf("Ate 10km acima da via %i, %f", veiculo, multa);	
		}
		else  // 11 a infinto
		{
			if(diferenca <= 30) { //11 a 30
				multa = 100.00;
				printf("Ate 30km acima da via %i, %f", veiculo, multa);	
			} 
			else { // 31 a infinto
				multa = 200.00;
				printf("Acima de 30km da via %i, %f", veiculo, multa);	
			}			
		}			
	} else {
		printf("Veiculo dentro da velocidade permitida !");	
	}
	
	
	return 0;
}
