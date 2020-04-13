#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for (i=1; i <=100; i++){
		if ((i % 3 == 0) && (i % 5 == 0)) {
			printf("%i e multiplo de 3 e 5. \n", i);
		}
		else {
			printf("%i. \n", i);
		}
	}
	
	return 0;
}
