#include <stdio.h>
#include <stdlib.h>
/* Construa um programa em C que utiliza uma matriz 10�3 que armazene as  temperaturas m�xima e minima do dia, assim como a media de temperatura na ultima coluna.
Crie um menu de escolha que ofere�a as seguintes informa��es:
temperatura minima de todos os dias.
temperatura m�xima de todos os dias.
maior varia��o de temperatura de todos os dias.
Sair do programa.*/

int main(int argc, char *argv[]) {
	float matriz[10][3];
	int c;
	float maior;
	for (c=0; c<10; c++){
		printf("Digite a temperatura m�nima: ");
		scanf("%f", &matriz[c][0]);
		printf("Digite a temperatura m�xima: ");
		scanf("%f", &matriz[c][1]);	
		matriz[c][2] = matriz[c][1] - matriz[c][0];
		if (c == 0) { 
			maior = matriz[c][2];
		}
		else {
			if (matriz[c][2] > maior) {
				maior = matriz[c][2];
			}
		}
		
	}
	int menu;
	do {
	printf("Digite a op��o desejada: [1] Temperatura m�nima; [2] Temperatura M�xima; [3] Maior varia��o; [4] Sair do programa: \n");
	scanf("%i", &menu);
	switch (menu) {
		case 1:
			for (c=0; c<10; c++) {
				printf("A temperatura m�nima na posi��o %i foi de %.0f: \n", c, matriz[c][0]);
		}
			break;
		case 2:
			for (c=0; c<10; c++) {
				printf("A temperatura m�xima na posi��o %i foi de %.0f: \n", c, matriz[c][1]);
		}
			break;
		case 3:
			for (c=0; c<10; c++) {
				printf("A varia��o na posi��o %i foi de %.0f: \n", c, matriz[c][2]);
		}
			printf("A maior varia��o foi de %.0f \n", maior);
			break;
		case 4:
			break;
		default:
			printf("op��o inv�lida");
		}
	}
	while (menu != 4);
	return 0;
}
