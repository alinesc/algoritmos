#include <stdio.h>
#include <stdlib.h>

/* 
Crie um  algoritmo que informe dois valores reais, 
valor em reais do litro da gasolina e valor em reais do litro
do álcool,  calcule os 70% do valor da gasolina para definir
na tela qual combustível e o mais vantajoso, 
sabendo que o valor do álcool para ser mais vantajoso 
deve ser menor que 70% do valor da gasolina.
*/

int main(int argc, char *argv[]) {
	float g, a, perc;
	printf("Informe o valor da gasolina e do alcool:");
	scanf("%f %f", &g, &a);
	//percentual gasolina
	perc = g * 0.7; // (g*70)/100
	if(a<perc){
		printf("Alcool e mais vantajoso!");				
	}
	else {
		printf("Gasolina e mais vantajosa!");				
	}
	
	return 0;
}
