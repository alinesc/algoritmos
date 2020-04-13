#include <stdio.h>
#include <stdlib.h>

/* Crie um  algoritmo que informe dois valores reais, valor em reais do litro da gasolina 
e valor em reais do litro do álcool,  calcule os 70% do valor da gasolina para definir na tela 
qual combustível e o mais vantajoso, sabendo que o valor do álcool para ser mais vantajoso
 deve ser menor que 70% do valor da gasolina. */

int main(int argc, char *argv[]) {
	float gasolina, alcool;
	printf("Digite o valor da gasolina: ");
	scanf("%f", &gasolina);
	printf("Digite o valor do alcool: ");
	scanf("%f", &alcool);
	if (alcool < gasolina*0.7){
		printf("E vantajoso colocar alcool.");
	}
	else {
		printf("Nao e vantajoso");
	}
	
	
	return 0;
}
