#include <stdio.h>
#include <stdlib.h>

/* 3 – Crie um programa que armazene em uma matriz 10×3 em cada uma das colunas armazene o
tamanho de uma aresta de um triangulo, ao final exiba o percentual de triângulos isoceles, equiláteros e escalenos */

int main(int argc, char *argv[]) {
	int matriz[10][3];
	int c, x, eq=0, is=0, es=0;
	for (c=0; c<10; c++){
		for (x=0; x<3; x++){
			printf("Digite a %ia aresta do %io triangulo: ", x+1, c+1);
			scanf("%i", &matriz[c][x]);
			}
		if (matriz[c][0]== matriz[c][1] && matriz[c][1]== matriz[c][2]) {
			eq++;
			}
		else {
			if (matriz[c][0] != matriz[c][1] && matriz[c][1] != matriz[c][2]) {
				es++;
					}
			else {
				is++;
					}
				}
			}
	is = (is *100)/10;
	eq = (eq *100)/10;
	es = (es *100)/10;
	printf("A porcentagem e de %i triangulos escalenos, %i isosceles e %i equilateros.", es, is, eq);
	return 0;
}
