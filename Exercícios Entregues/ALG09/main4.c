#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, n, cont2 = 0, cont3 = 0;
	for(i=0;i<10;i++) {
		printf("Digite um número: ");
		scanf("%i", &n);
		if (n % 2 == 0) {
			cont2++;
		}
		if (n % 3 == 0) {
				cont3++;
		}
		}
		printf("Foram digitados %i numeros multiplos de 2 e %i multiplos de 3.", cont2, cont3);
	
	return 0;
}
