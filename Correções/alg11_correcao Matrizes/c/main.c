#include <stdio.h>
#include <stdlib.h>

/* 
3 – Crie um programa que armazene em uma matriz 10×3 
em cada uma das colunas armazene o tamanho de uma aresta de um triangulo
, ao final exiba o percentual de triângulos isoceles,
 equiláteros e escalenos
 */

int main(int argc, char *argv[]) {
	int tri[10][3];
	float iso=0, equ=0, esc=0, total;
	int x;
	
	for(x=0; x<10; x++){
		printf("Informe arestas A,B,C :\n");
		scanf("%i %i %i", &tri[x][0], &tri[x][1], &tri[x][2]);
		if((tri[x][0]+tri[x][1])<tri[x][2] || 
		   (tri[x][1]+tri[x][2])<tri[x][0] || 
		   (tri[x][0]+tri[x][2])<tri[x][1] )
		{
			printf("Nao e um triangulo ! \n");   	
		} else {
			if(tri[x][0]==tri[x][1] && tri[x][1]==tri[x][2]){
				equ++;	
			} else {
				if(tri[x][0]==tri[x][1] || tri[x][1]==tri[x][2]
					 || tri[x][0]==tri[x][2]){	
					iso++;
				} else{
					esc++;
				}
			}	
		}
	}
	total = iso+equ+esc;
	iso = (iso/total)*100;
	equ = (equ/total)*100;
	esc = (esc/total)*100;
	printf("Equilateros=%.2f, Isoceles=%.2f, Escalenos=%.2f", equ,
		iso, esc);
	
	return 0;
}
