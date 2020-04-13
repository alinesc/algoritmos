#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float n, media, soma = 0, cont = 0;
	do {
		printf("Digite um número: ");
		scanf("%f", &n);
		if (n == 0) {
			break;
		}
		else {
		soma = soma + n;
		cont ++;
	}
	}
	while (n != 0);
	media = soma/cont;
	printf("A media dos valores e igual a %f", media);
	
	
	return 0;
}
