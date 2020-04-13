#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont = 0;
	float n1, n2, m;
	// ENQUANTO FAÇA - 0 a N Repetições 
	while(cont<=5)
	{
		printf("cont=%d\n\n", cont);
		printf("Informe n1:");
		scanf("%f", &n1);
		printf("Informe n2:");
		scanf("%f", &n2);
		m = (n1 + n2)/2;
		printf("media=%f\n", m);
		
		cont = cont + 1;		
	}
	
	
	return 0;
}
