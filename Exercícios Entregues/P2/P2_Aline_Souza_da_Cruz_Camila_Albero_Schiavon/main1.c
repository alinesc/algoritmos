#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int vetor[30];
    int seq=0, maiorSeq=0, x , resto2;
    
    for(x=0; x<30; x++){
        printf("Informe um numero:");
        scanf("%i", &vetor[x]);
        resto2 = vetor[x] % 2; //verifica se é par
        if(resto2==0){
            seq++; // seq = seq + 1
            if(seq > maiorSeq){
                maiorSeq = seq; //adiciona a maior frequencia à variável
            }
        } else {
            seq = 0; // zera o valor quando a sequência for quebrada
        }
    }
    printf("A maior sequencia %i ", maiorSeq);
    return 0;
}
