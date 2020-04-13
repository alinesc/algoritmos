//
//  main.c
//  ALG2_2
//
//  Created by Aline Souza Cruz on 01/12/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int vetor1[10];
    int vetor2[10];
    int contador;
    int contador2 = 9;
    for (contador = 0; contador < 10; contador++) {
        printf("Digite um número: ");
        scanf("%i", &vetor1[contador]);
    }
    for (contador = 0; contador < 10; contador++) {
            vetor2[contador] = vetor1[contador2];
            printf("%i \n", vetor2[contador]);
            contador2--;
    }
    return 0;
}
