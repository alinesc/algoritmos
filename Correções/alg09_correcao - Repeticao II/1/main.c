#include <stdio.h>
#include <stdlib.h>

/* 
 1- Dado o algoritmo abaixo escrito em C :

int i, a, b;
for(i=0; i<20; i++)
{
   scanf("%d",&a);
   scanf("%d",&b);
   r = a + b;
   printf("%d\n", r);
}
a- reescreva com o la�o enquanto fa�a (while)

b- reescreva com o la�o fa�a enquanto (do while)
 
*/

int main(int argc, char *argv[]) {
	int i, a, b, r;
	//FA�A ATE .... DETERMINADO X..Y
	for(i=0; i<20; i++)
	{
   		scanf("%i %i",&a,&b);   		
   		r = a + b;
   		printf("Soma=%i\n", r);
	}
	//a- reescreva com o la�o enquanto fa�a (while) 0..N
	i=0;
	while(i<20){
		scanf("%i %i",&a,&b);   		
   		r = a + b;
   		printf("Soma=%i\n", r);
   		i=i+1;
	}
	//b- reescreva com o la�o fa�a enquanto (do while) 1..N
	i = 0;
	do{
		scanf("%i %i",&a,&b);   		
   		r = a + b;
   		printf("Soma=%i\n", r);
   		i=i+1;
	} while(i<20);
	
	
	return 0;
}
