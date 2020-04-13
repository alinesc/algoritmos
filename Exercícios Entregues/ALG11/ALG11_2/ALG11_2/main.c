#include <stdio.h>
#include <stdlib.h>
/* 2 - Armazene em uma matriz 10x5 o resultado de uma prova de alternativas:
a - coluna 0
b - coluna 1
c - coluna 2
d - coluna 3
e -  coluna 4
Exemplo da resposta da primeira questao com a alternativa C:

prova[0][0]=0 ; prova[0][1]=0; prova[0][2]=1;prova[0][3]=0;prova[0][4]=0;

Com um gabarito ja definido e armazenado em uma matriz, verifique a nota obtida pelo aluno */

int main(int argc, char *argv[]) {
    int gabarito[10][5];
    int resposta,c;
    int acertos = 0;
    //Resposta 1 - d, 2-a
    gabarito[0][0] = 0;gabarito[0][1] = 0;gabarito[0][2] = 0;gabarito[0][3] = 1; gabarito[0][4]=0;
    gabarito[1][0] = 1;gabarito[1][1] = 0;gabarito[1][2] = 0;gabarito[1][3] = 0; gabarito[1][4]=0;
    gabarito[2][0] = 0;gabarito[2][1] = 0;gabarito[2][2] = 0;gabarito[2][3] = 0; gabarito[2][4]=1;
    gabarito[3][0] = 0;gabarito[3][1] = 0;gabarito[3][2] = 1;gabarito[3][3] = 0; gabarito[3][4]=0;
    gabarito[4][0] = 0;gabarito[4][1] = 1;gabarito[4][2] = 0;gabarito[4][3] = 0; gabarito[4][4]=0;
    gabarito[5][0] = 0;gabarito[5][1] = 0;gabarito[5][2] = 0;gabarito[5][3] = 0; gabarito[5][4]=1;
    gabarito[6][0] = 1;gabarito[6][1] = 0;gabarito[6][2] = 0;gabarito[6][3] = 0; gabarito[6][4]=0;
    gabarito[7][0] = 0;gabarito[7][1] = 0;gabarito[7][2] = 1;gabarito[7][3] = 0; gabarito[7][4]=0;
    gabarito[8][0] = 0;gabarito[8][1] = 0;gabarito[8][2] = 0;gabarito[8][3] = 1; gabarito[8][4]=0;
    gabarito[9][0] = 0;gabarito[9][1] = 1;gabarito[9][2] = 0;gabarito[9][3] = 0; gabarito[9][4]=0;
    for (c=0; c<10; c++) {
        printf("Digite a resposta da alternativa %i - 1(A), 2(B), 3(C), 4(D), 5(E): ", c+1);
        scanf("%i", &resposta);
        switch (resposta) {
            case 1:
                if (gabarito[c][0] == 1) {
                    acertos ++;
                }
                break;
            case 2:
                if (gabarito[c][1] == 1) {
                    acertos ++;
                }
                break;
            case 3:
                if (gabarito[c][2] == 1) {
                    acertos ++;
                }
                break;
            case 4:
                if (gabarito[c][3] == 1) {
                    acertos ++;
                }
                break;
            case 5:
                if (gabarito[c][4] == 1) {
                    acertos ++;
                }
                break;
            default:
                break;
        }
    }
    printf("A nota do aluno será %i. ", acertos);
    
    return 0;
}
