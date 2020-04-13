//
//  main.c
//  Exercicios_ReforcoP1_2
//
//  Created by Aline Souza Cruz on 30/09/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

/* Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s  (metros por segundo). A formula de conversão  e: M = K/3.6, sendo K a velocidade em km/h e M em m/s.*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
    float v_km_h, v_m_s;
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &v_km_h);
    v_m_s = v_km_h / 3.6;
    printf("A velocidade em m/s é de : %f", v_m_s);
    return 0;
}
