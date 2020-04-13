#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i, n, cont2 = 0, max = 0;
	for(i=0;i<10;i++) {
		printf("Digite um número: ");
		scanf("%i", &n);
		if (n%2 == 0){
			cont2++;
		}
		else {
			max = cont2;
			cont2 = 0;
		}
		}
	if (max >= cont2) {
		printf("A maior sequencia foi de %i numeros", max);
	}
	else {
		printf("A maior sequencia foi de %i numeros", cont2);
	}


	return 0;
}
