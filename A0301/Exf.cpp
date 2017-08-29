/* 
 * File:   main.cpp
 * Author: ana
 *
6-Faça um programa que solicite a informação de valores inteiros
para uma matriz de ordem 3 (M) e que, em seguida, exiba a Matriz
Transposta de M (MT).
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
    int mA[3][3], i, j, mB[3][3];

    printf("Informe o numero para matriz : ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Informe um numero para linha [%d] e coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &mA[i][j]);
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            mB[i][j] = mA[j][i];
        }
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", mB[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}




