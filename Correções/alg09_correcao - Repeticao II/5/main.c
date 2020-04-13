#include <stdio.h>
#include <stdlib.h>

/* 
5- Crie um laço e verifique qual a maior sequencia de números 
pares informados, o laço fara 10 iterações.
Exe:   1, 2,3,4,6,8,5,3,2,5,8,4,0   
Sequencia :4,6,8   O programa vai retornar: 3
*/

int main(int argc, char *argv[]) {
	int numero, seq=0, maiorSeq=0, x , resto2;
	
	for(x=0; x<10; x++){
		printf("Informe um numero:");
		scanf("%i", &numero);
		resto2 = numero % 2;	
		if(resto2==0){
			seq++; // seq = seq + 1
			if(seq > maiorSeq){
				maiorSeq = seq;	
			}	
		} else {
			seq = 0;	
		}		
	}
	printf("A maior sequencia %i ", maiorSeq);	
	return 0;
}
