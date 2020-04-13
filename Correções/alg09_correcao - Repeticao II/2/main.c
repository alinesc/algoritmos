#include <stdio.h>
#include <stdlib.h>

/* 
2- Dado o algoritmo abaixo escrito em C :
int x = 10;
while(x>0)
{
  prinf("%d",x);
  x--;
}
a- reescreva com o laço faça até (for)
b- reescreva com o laço faça enquanto (do while)
*/

int main(int argc, char *argv[]) {
	int x = 10;
	while(x>0)
	{
  		printf("%d ",x);
  		x--; // x = x - 1
	}
	//a- reescreva com o laço faça até (for)
	for(x=10;x>0;x--){
		printf("%d ",x);
	}	
	//b- reescreva com o laço faça enquanto (do while)
	x=10;
	do{
		printf("%d ",x);
  		x--; // x = x - 1		
	} while(x>0);
	return 0;
}
