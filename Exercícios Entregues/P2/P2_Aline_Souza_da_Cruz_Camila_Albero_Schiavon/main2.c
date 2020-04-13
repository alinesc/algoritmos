
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float vetor[24];
    int contador;
    float maior, menor, media = 0;
    for (contador = 0; contador < 24; contador++) {
        printf("Digite o índice de transito %i: ", contador);
        scanf("%f", &vetor[contador]);
    }
    for (contador = 0; contador < 24; contador++) {
        if (contador == 0) { // atribuir maior e valor no primeiro ciclo
            menor = vetor[contador];
            maior = vetor[contador];
        }
        else {
            if (vetor[contador] < menor) { //menor valor
                menor = vetor[contador];
            }
            else {
                if (vetor[contador] > maior) { //maior valor
                    maior = vetor[contador];
                }
            }
        }
            media = media + vetor[contador]; //calculo da media
    }
    media = media/24;
    printf("O menor indice foi de %f km, o maior indice foi de %f km e a media foi de %f km.", menor, maior, media);
    return 0;
}
