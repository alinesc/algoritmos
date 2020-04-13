//
//  main.c
//  ALG10_1
//
//  Created by Aline Souza Cruz on 11/11/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int vetor[20];
    int x;
    float contpar = 0;
    float contimpar = 0;
    float porpar, porimpar;
    for (x=0; x<20; x++) {
        printf("Digite um número: ");
        scanf("%i", &vetor[x]);
        if (vetor[x] % 2 == 0) {
            contpar = contpar +1;
        }
        else {
            contimpar = contimpar + 1;
        }
    }
    porpar = (contpar/20)*100;
    porimpar = (contimpar/20)*100;
    printf("A porcentagem de números pares foi %f e de impares foi %f", porpar, porimpar);
    return 0;
}
