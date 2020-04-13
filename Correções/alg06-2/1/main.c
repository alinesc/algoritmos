#include <stdio.h>
#include <stdlib.h>

/* 
1- A empresa XPTO concedeu um bônus de 20% do valor do salário a todos os
funcionários com tempo de trabalho na empresa igual ou superior a 5 anos 
e de 10% aos demais.
Faça um um programa em C que receba o salário e o tempo de serviço de um
funcionário, calcule e mostre o valor do bônus recebido por ele.
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
