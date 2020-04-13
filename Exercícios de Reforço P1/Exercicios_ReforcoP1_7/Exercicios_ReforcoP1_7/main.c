//
//  main.c
//  Exercicios_ReforcoP1_7
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
/* João, comprou um microcomputador para controlar o rendimento diário de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa em C que leia a variável P (peso de peixes) e verifique se há excesso. Se houver, gravar na variável E (Excesso) e na variável M o valor da multa que João deverá pagar. Caso contrário mostrar tais variáveis com o conteúdo ZERO.*/
    
    float P, E, M; // p = peso, e = excesso, m = multa
    printf("Digite o peso de peixes (em kg): ");
    scanf("%f", &P);
    if (P > 50) {
        E = P - 50;
        M = E * 4;
        printf ("O peso excedente é de %f kg e a multa é de R$ %f.", E, M);
    }
    else {
        E, M = 0;
        printf ("%f %f", E, M);
    }
    return 0;
}
