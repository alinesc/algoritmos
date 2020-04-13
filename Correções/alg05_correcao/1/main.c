#include <stdio.h>
#include <stdlib.h>

/* 
Informe as duas notas de um aluno (P1 e P2) e a quantidade de faltas no semestre,
 calcule a media das notas e o percentual de faltas sobre 20 aulas.  
 Caso o percentual de faltas for maior que 30% o aluno esta automaticamente reprovado,
  caso ao contrario verifique se a media e maior igual a 6, 
   se afirmativo o aluno esta aprovado, senão informe uma nota P3 para recalcular
   a media, se a nova media for maior igual a 6, escreva aprovado no exame, 
caso negativo exiba reprovado por nota.
 */

int main(int argc, char *argv[]) {
	float p1, p2, p3, media, percFaltas, faltas;
	//entrada de dados
	printf("Informe as notas p1 e p2: \n");
	scanf("%f %f", &p1, &p2);
	
	printf("Informe o total de faltas: \n");
	scanf("%f", &faltas);
	
	//processamento
	media 		= (p1+p2)/2;
	percFaltas 	= faltas/20;
	
	if(percFaltas > 0.3)
	{
		printf("Alunos reprovado por faltas: %f", percFaltas);		
	}
	else
	{
		if(media>=6)
		{
			printf("Aluno aprovado: %f", media);	
		}	
		else 
		{
			printf("Informe a nota p3:\n");
			scanf("%f", &p3);
			media = (p1+p2+p3)/3;
			if(media>=6)
			{
				printf("Aprovado no exame: %f", media);	
			}
			else 
			{
				printf("Reprovado no exame: %f", media);	
			}			
		}
	}
	 
	
	
	return 0;
}
