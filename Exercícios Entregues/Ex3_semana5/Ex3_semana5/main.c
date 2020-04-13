//
//  main.c
//  Ex3_semana5
//
//  Created by Aline Souza Cruz on 09/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float indice;
    printf("Digite o índice de poluição: ");
    scanf("%f", &indice);
    if (indice >= 0.3 && indice < 0.4){
        printf("As empresas do primeiro grupo estão convocadas a paralisarem suas atividades.");
    }
        else {
            if (indice >= 0.4 && indice < 0.5){
                printf("As empresas do primeiro e segundo grupos estão convocadas a paralisarem suas atividades.");
            }
            else {
                if (indice > 0.5){
                    printf("As empresas dos três grupos estão convocadas a paralisarem suas atividades.");
                }
            }
        }
    return 0;
}
