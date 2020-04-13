//
//  main.c
//  Ex4_semana5
//
//  Created by Aline Souza Cruz on 09/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    /*Elabore um algoritmo que dada a idade de um nadador classifique-o em uma das seguintes categorias:
     Infantil A = 5 a 7 anos
     Infantil B = 8 a 11 anos
     Juvenil A = 12 a 13 anos
     Juvenil B = 14 a 17 anos
     Adultos = Maiores de 18 anos
 */
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%i", &idade);
    if (idade >=5 && idade <=7){
        printf("Esse nadador pertence à categoria Infantil A");
    }
    else{
        if (idade >=8 && idade <=11){
            printf("Esse nadador pertence à categoria Infantil B");
        }
        else {
            if (idade >=12 && idade <=13){
                printf("Esse nadador pertence à categoria Juvenil A");
            }
            else {
                if (idade >=14 && idade <=17){
                    printf("Esse nadador pertence à categoria Juvenil B");
                }
                else {
                    if (idade >=18){
                        printf("Esse nadador pertence à categoria Adultos");
                    }
                }
            }
        }
    }
    return 0;
}
