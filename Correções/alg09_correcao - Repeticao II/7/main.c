#include <stdio.h>
#include <stdlib.h>

/* 
7- Faça um algoritmo que conte de 1 a 100 e a cada múltiplo 
de 3 e 5 simultaneamente emita uma mensagem:  “Múltiplo de 3 e 5”.
*/

int main(int argc, char *argv[]) {
	int x, resto3, resto5;
	for(x=1;x<=100;x++){
		resto3 = x % 3;
		resto5 = x % 5;
		if(resto3==0 && resto5==0){
			printf("multiplo de 3 e 5 = %i \n", x)	;
		}
	}
	
	return 0;
}
