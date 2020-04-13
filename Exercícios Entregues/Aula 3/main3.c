#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c,d,media;
	printf("Informe valores para a,b,c,d:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	media = (a+b+c+d) / 4;
	printf("A media = %f", media);
	
	return 0;
}
