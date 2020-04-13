#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int nsecreto = 6, ninformado, cont = 0;
	do {
		printf("Digite para descobrir o numero: ");
		scanf("%i", ninformado);
		if (ninformado > nsecreto) {
			printf("O número informado e maior que o numero secreto.");
		}
		else {
			if (ninformado < nsecreto) {
				printf("O número informado e menor que o numero secreto.");
		}
		else {
			printf("Voce acertou e precisou de %i tentativas para descobrir.", cont);
			break;
		}
	}
	cont++;
}
	
	while(nsecreto != ninformado);
	
	return 0;
}
