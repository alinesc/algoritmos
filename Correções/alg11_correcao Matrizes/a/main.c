#include <stdio.h>
#include <stdlib.h>

/* 
1 – Construa um programa em C que utiliza uma matriz 10×3 que armazene as 
 temperaturas máxima e minima do dia, 
 assim como a media de temperatura na ultima coluna.  
 Crie um menu de escolha que ofereça as seguintes informações:

1-temperatura minima de todos os dias.
2-temperatura máxima de todos os dias.
3-maior variação de temperatura de todos os dias.
4-Sair do programa.
 */

int main(int argc, char *argv[]) {
	float temp[10][3];
	int cMin=0, cMax=1,cAvg=2;
	int x, op;
	float minima, maxima, variacao, aux;
	
	for(x=0;x<10;x++){ //FAÇA ATE X A Y
		printf("Informe a minima e a maxima do dia %i:", x);
		scanf("%f %f", &temp[x][cMin], &temp[x][cMax]);	
		temp[x][cAvg] = (temp[x][cMin] + temp[x][cMax])/2;		
		if(x==0){ //e a primeira interação do laço
			minima = temp[x][cMin];
			maxima = temp[x][cMax];
			variacao = 	temp[x][cMax] - temp[x][cMin];
		} else {
			if(temp[x][cMin] < minima){
				minima = temp[x][cMin];		
			}
			if(temp[x][cMax] > maxima){
				maxima = temp[x][cMax];		
			}						
			aux = temp[x][cMax] - temp[x][cMin];
			if(aux > variacao){
				variacao = aux;	
			}
		}
	}
	
	
	do{ // 1 a N		
		printf("1-temperatura minima de todos os dias.\n");
		printf("2-temperatura maxima de todos os dias.\n");
		printf("3-maior variacao de temperatura de todos os dias.\n");
		printf("4-Sair do programa.\n");
		scanf("%i",&op);
		system("cls");
		switch(op){
			case 1:{
				printf("Minima total=%f \n", minima);
				break;
			}	
			case 2:{
				printf("Maxima total=%f \n", maxima);
				break;
			}
			case 3:{
				printf("Maior variacao=%f \n", variacao);
				break;
			}
			default:{
				break;
			}
		}		
	} while(op>=1 && op<=3);
	
	return 0;
}
