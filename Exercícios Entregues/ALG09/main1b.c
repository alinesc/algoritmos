#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0, a, b, r;
	do
	{
	scanf("%d", &a);
	scanf("%d", &b);
	r = a + b;
	printf("%d\n", r);
	i++;
}
	while (i < 20);
	
	return 0;
}
