//
//  main.c
//  ALG12_1
//
//  Created by Aline Souza Cruz on 01/12/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float vetor[24];
    int contador;
    float maior, menor, media = 0;
    for (contador = 0; contador < 24; contador++) {
        printf("Digite o índice da hora %i: ", contador);
        scanf("%f", &vetor[contador]);
    }
    for (contador = 0; contador < 24; contador++) {
        if (contador == 0) {
            menor = vetor[contador];
            maior = vetor[contador];
        }
        else {
            if (vetor[contador] < menor) {
                menor = vetor[contador];
            }
            else {
                if (vetor[contador] > maior) {
                    maior = vetor[contador];
                }
            }
        }
            media = media + vetor[contador];
    }
    media = media/24;
    printf("O menor numero digitado foi %f, o maior foi %f e a media foi de %f.", menor, maior, media);
    return 0;
}
