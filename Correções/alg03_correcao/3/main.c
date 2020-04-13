#include <stdio.h>
#include <stdlib.h>

/* 
3-Faça um programa em C que calcule a media ponderada de 3 números
reais (A,B e C)  mostre o resultado onde os pesos serão (2,3,5)
*/

int main(int argc, char *argv[]) {
	//float - numero decimal
	float a,b,c,media;
	//entrada dos dados
	printf("Entre com o valor de a:");
	scanf("%f", &a);
	printf("Entre com o valor de b:");
	scanf("%f", &b);
	printf("Entre com o valor de c:");
	scanf("%f", &c);
	//processamento
	media = ((a*2)+(b*3)+(c*5))/10;
	//saida
	printf("A media de (%f, %f, %f)= %f ", a,b,c, media);
	return 0;
}
