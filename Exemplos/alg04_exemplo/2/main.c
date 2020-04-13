#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float p1, p2, media;
	//entrada
	printf("Informe um valor para p1:");
	scanf("%f", &p1);
	printf("Informe um valor para p2:");
	scanf("%f", &p2);
	//processamento
	media = (p1+p2)/2;
	if(media >= 6) //expressão logica
	{
		printf("Aluno aprovado ! %f ", media);	
	} else {
		printf("Aluno reprovado !");
	}
	
	
	
	return 0;
}
