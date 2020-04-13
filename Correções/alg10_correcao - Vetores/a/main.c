#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeros[20];
	int x, resto2;
	float pares =0, impares=0;
	
	for(x=0;x<20;x++){ //0..19
		printf("Informe um numero:");	
		scanf("%i", &numeros[x]);   // numeros[x]
	}
	for(x=0;x<20;x++){ //0..19
		resto2 = numeros[x]%2; //resto da divisao inteira por 2
		if(resto2==0){
			pares++; //pares = pares + 1;	
		} else {
			impares++; //impares = impares + 1;	
		}
	}
	pares = (pares/20)*100;
	impares = (impares/20)*100;
	printf("Pares= %.2f , impares= %.2f",pares, impares);
	return 0;
}
