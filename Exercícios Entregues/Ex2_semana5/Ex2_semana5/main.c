//
//  main.c
//  Ex2_semana5
//
//  Created by Aline Souza Cruz on 09/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float n1, n2, s, sub, m, d;
    int opcao;
    printf("Digite o valor de n1: ");
    scanf("%f", &n1);
    printf("Digite o valor de n2: ");
    scanf("%f", &n2);
    printf("Digite um número para sua opção - 1 (somar); 2 (subtrair); 3 (multiplicar); 4 (dividir): ");
    scanf("%i", &opcao);
    s = n1 + n2;
    sub = n1 - n2;
    m = n1 * n2;
    d = n1/n2;
    if (opcao == 1){
        printf("%f", s);
    }
    else {
        if (opcao == 2){
            printf("%f", sub);
        }
        else {
            if (opcao == 3){
                printf("%f", m);
        }
            else {
                    printf("%f", d);
            }
    }
    }
    return 0;
}
