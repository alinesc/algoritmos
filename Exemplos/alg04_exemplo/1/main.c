#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int x, y, z;
		
	printf("Informe valor para X:");
	scanf("%d", &x); // %d e utilizado para numeros inteiros
	
	printf("Informe valor para Y:");
	scanf("%d", &y);
	
	printf("Informe valor para Z:");
	scanf("%d", &z);
	//expressao relacional e quando comparamos dois valores do mesmo tipo
	printf("Teste x==y => %d \n", (x == y));
	printf("Teste x!=z => %d \n", (x != z));
	printf("Teste y>=z => %d \n", (y >= z));
	printf("Teste x<y => %d \n", (x < y));
	//op. logicos && = E, || = ou, ! = nao
	printf("Teste x>y || z>y => %d \n", (x>y || z>y));
	printf("Teste x!=y && x!=z => %d \n", (x!=y && x!=z));
	printf("Teste !(x>y) => %d \n", (!(x>y)));
	return 0;
}
