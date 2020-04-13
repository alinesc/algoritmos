#include <stdio.h>
#include <stdlib.h>

/* 
1- A empresa XPTO concedeu um b�nus de 20% do valor do sal�rio a todos os
funcion�rios com tempo de trabalho na empresa igual ou superior a 5 anos 
e de 10% aos demais.
Fa�a um um programa em C que receba o sal�rio e o tempo de servi�o de um
funcion�rio, calcule e mostre o valor do b�nus recebido por ele.
*/

int main(int argc, char *argv[]) {
	float salario, bonus;
	int anos;
	//entrada
	printf("Informe o salario e os anos de trabalho:\n");
	scanf("%f %i", &salario, &anos);
	//processamento 
	if(anos>=5){
		bonus = salario * 0.2;	
	} 	
	else 	
	{
		bonus = salario *0.1;		
	}
	//saida
	printf("O Bonus do salario %.2f, foi = %.2f", salario, bonus);	
	return 0;
}
