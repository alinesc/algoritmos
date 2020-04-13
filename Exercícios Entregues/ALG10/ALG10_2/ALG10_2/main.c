//
//  main.c
//  ALG10_2
//
//  Created by Aline Souza Cruz on 11/11/19.
//  Copyright © 2019 Aline Souza Cruz. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int v1[10];
    int v2[10];
    int c;
    for (c=0; c<10; c++) {
        printf("Digite um valor: ");
        scanf("%i", &v1[c]);
    }
    for (c=0; c<10; c++) {
        if (v1[c] % 2 == 0) {
            v2[c] = v1[c] * 2;
            printf("%i \n", v2[c]);
        }
        else {
            v2[c] = v1[c] * 3;
            printf("%i \n", v2[c]);
        }
    }
    return 0;
}
