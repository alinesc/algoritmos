#include <stdio.h>
#include <stdlib.h>

/* 
Faça um algoritmo que calcule a media ponderada das notas de 3
provas. A primeira e a segunda prova tem peso 1 e a terceira
tem peso 2. Ao final, mostrar a media do aluno e indicar 
 se o aluno foi aprovado ou reprovado. 
 A nota para aprovação deve ser igual ou superior a 60 
 pontos.
*/

int main(int argc, char *argv[]) {
	float p1, p2, p3, media;
	printf("Informe notas de p1, p2 e p3:");
	scanf("%f %f %f", &p1, &p2, &p3);
	media = (p1+p2+(p3*2))/4;
	if(media>=60){
		printf("Aluno aprovado %f", media);	
	} 
	else {
		printf("Aluno reprovado %f", media);	
	}
	return 0;
}
