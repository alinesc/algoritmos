#include <stdio.h>
#include <stdlib.h>
/* Construa um programa em C que utiliza uma matriz 10×3 que armazene as  temperaturas máxima e minima do dia, assim como a media de temperatura na ultima coluna.
Crie um menu de escolha que ofereça as seguintes informações:
temperatura minima de todos os dias.
temperatura máxima de todos os dias.
maior variação de temperatura de todos os dias.
Sair do programa.*/

int main(int argc, char *argv[]) {
	float matriz[10][3];
	int c;
	float maior;
	for (c=0; c<10; c++){
		printf("Digite a temperatura mínima: ");
		scanf("%f", &matriz[c][0]);
		printf("Digite a temperatura máxima: ");
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
	printf("Digite a opção desejada: [1] Temperatura mínima; [2] Temperatura Máxima; [3] Maior variação; [4] Sair do programa: \n");
	scanf("%i", &menu);
	switch (menu) {
		case 1:
			for (c=0; c<10; c++) {
				printf("A temperatura mínima na posição %i foi de %.0f: \n", c, matriz[c][0]);
		}
			break;
		case 2:
			for (c=0; c<10; c++) {
				printf("A temperatura máxima na posição %i foi de %.0f: \n", c, matriz[c][1]);
		}
			break;
		case 3:
			for (c=0; c<10; c++) {
				printf("A variação na posição %i foi de %.0f: \n", c, matriz[c][2]);
		}
			printf("A maior variação foi de %.0f \n", maior);
			break;
		case 4:
			break;
		default:
			printf("opção inválida");
		}
	}
	while (menu != 4);
	return 0;
}
