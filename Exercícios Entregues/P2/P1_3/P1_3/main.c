
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float matriz[5][3];
    int altura=0, peso=1, imc=2; //posicoes na matriz referente às colunas 0, 1 e 2
    int linha; // contador
    float pesoideal;
    for (linha=0; linha < 5; linha++){
        printf("Digite a altura em m: ");
        scanf("%f", &matriz[linha][altura]);
        printf("Digite o peso em kg: ");
        scanf("%f", &matriz[linha][peso]);
        matriz[linha][imc] = matriz[linha][peso]/(matriz[linha][altura] * matriz[linha][altura]); // calculo do imc
    }
    for (linha=0; linha < 5; linha++){
        if (matriz[linha][imc] > 25) {
            pesoideal = 25 * (matriz[linha][altura] * matriz[linha][altura]);
            printf("A %ia pessoa precisa perder %f kilos. \n", linha+1, (matriz[linha][peso]-pesoideal));
        }
    }
    return 0;
}
