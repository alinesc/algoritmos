//
//  main.c
//  Ex1_semana5
//
//  Created by Aline Souza Cruz on 09/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float p1, p2, p3, media, porcentagem;
    int faltas;
    printf("Digite o valor da P1: ");
    scanf("%f", &p1);
    printf("Digite o valor da P2: ");
    scanf("%f", &p2);
    printf("Digite o número de faltas: ");
    scanf("%i", &faltas);
    media = (p1 + p2)/2;
    porcentagem = (faltas * 100)/20;
    if (porcentagem > 30) {
        printf("Aluno reprovado por faltas.");
    }
    else {
        if (media >= 6.0) {
            printf("Aluno aprovado."); }
        else {
            printf("Informe sua nota P3: ");
            scanf("%f", &p3);
            media = (p1 + p2 + p3)/3;
            if (media >= 6.0) {
                printf("Aluno foi aprovado no exame");
            }
            else {
                printf("Aluno reprovado por nota.");
            }
        }
        
    }
    return 0;
}
            
