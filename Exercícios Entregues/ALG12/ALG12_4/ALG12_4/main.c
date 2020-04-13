
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float vestibular[10][3];
    int linha;
    float contADS = 0, contGECOM = 0, contEve = 0, contRH = 0;
    float mediaADS = 0, mediaGECOM = 0, mediaEve = 0, mediaRH = 0;
    float media = 0;
    for (linha = 0; linha < 10; linha++) {
        printf("Digite o CPF: ");
        scanf("%f", &vestibular[linha][0]);
        printf("Digite sua idade: ");
        scanf("%f", &vestibular[linha][1]);
        printf("Digite o curso escolhido 1-ADS 2-GECOM 3-Eventos 4-RH: ");
        scanf("%f", &vestibular[linha][2]);
        if (vestibular[linha][2] == 1) {
            contADS++;
        }
        else {
            if (vestibular[linha][2] == 2) {
                contGECOM++;
            }
            else {
                if (vestibular[linha][2] == 3) {
                    contEve++;
                }
                else {
                    contRH++;
                }
            }
        }
        media = media + vestibular[linha][1];
    }
    media = media/10;
    mediaADS = contADS/4;
    mediaRH = contRH/4;
    mediaEve = contEve/4;
    mediaGECOM = contGECOM/4;
    printf("O total de inscritos no curso de ADS foi de %f, GECOM %f, Eventos %f e RH %f.", contADS, contGECOM, contEve, contRH);
    printf("A média de idade foi %f anos. ", media);
    printf("A média de inscritos por curso foi de %f para ADS, %f para GECOM, %f para RH, %f para Eventos.", mediaADS, mediaGECOM, mediaRH, mediaEve);
    return 0;
}
