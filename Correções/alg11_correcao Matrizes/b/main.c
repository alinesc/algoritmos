#include <stdio.h>
#include <stdlib.h>

/* 
2 – Armazene em uma matriz 10×5 o resultado de uma prova 
de alternativas:

a – coluna 0
b – coluna 1
c – coluna 2
d – coluna 3
e – coluna 4

Exemplo da resposta da primeira questão com a alternativa C:

prova[0][0]=0 ; 
prova[0][1]=0; 
prova[0][2]=1;
prova[0][3]=0;
prova[0][4]=0;

Com um gabarito já definido e armazenado em uma matriz, 
verifique a nota obtida pelo aluno
 */

int main(int argc, char *argv[]) {
	int gab[10][5], prova[10][5];
	int x, y, cA=0, cB=1, cC=2, cD=3, cE=4;
	int nota=0;
	
	for(x=0;x<10;x++){
		for(y=0;y<5;y++){
			gab[x][y] = 0;
			prova[x][y] = 0;
		}			
	}
	gab[0][cB]=1;
	gab[1][cD]=1;
	gab[2][cA]=1;
	gab[3][cE]=1;
	gab[4][cA]=1;
	gab[5][cB]=1;
	gab[6][cD]=1;
	gab[7][cA]=1;
	gab[8][cE]=1;
	gab[9][cA]=1;
	
	for(x=0;x<10;x++){
		printf("Informe a resposta para questao %i ", x);
		printf("\n 0-A,1-B,2-C,3-D,4-E :");	
		scanf("%i", &y);
		prova[x][y] = 1;
		if(prova[x][y] == gab[x][y]){
			nota++;	
		} 
	}
	printf("O aluno tirou a nota=%i \n", nota);
	printf("Prova\n");
	for(x=0;x<10;x++){
		printf("%i - ",x);
		for(y=0;y<5;y++){
			printf("%i ",prova[x][y]); 			
		}			
		printf("\n");
	}
	printf("Gabarito\n");
	for(x=0;x<10;x++){
		printf("%i - ",x);
		for(y=0;y<5;y++){
			printf("%i ",gab[x][y]); 			
		}			
		printf("\n");
	}
	
	return 0;
}
