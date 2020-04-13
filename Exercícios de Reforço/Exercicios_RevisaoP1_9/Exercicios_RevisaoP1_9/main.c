//
//  main.c
//  Exercicios_RevisaoP1_9
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
/* Desenvolva um programa em C que: Leia 4 (quatro) números; calcule o quadrado de cada um; se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize; Caso contrário, imprima os valores lidos e seus respectivos quadrados. */
    
    int n1,n2,n3,n4, q1, q2, q3, q4;
    printf("Digite o primeiro número: ");
    scanf("%i", &n1);
    printf("Digite o segundo número: ");
    scanf("%i", &n2);
    printf("Digite o terceiro número: ");
    scanf("%i", &n3);
    printf("Digite o quarto número: ");
    scanf("%i", &n4);
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    q4 = n4 * n4;
    if (q3 >= 1000) {
        printf ("o quadrado do terceiro número é %i", q3);
    }
    else {
        printf("O quadrado de %i é %i \n", n1, q1);
        printf("O quadrado de %i é %i \n", n2, q2);
        printf("O quadrado de %i é %i \n", n3, q3);
        printf("O quadrado de %i é %i \n", n4, q4);
    }
    return 0;
}
