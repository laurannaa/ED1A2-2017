/* 
 * File:   main.cpp
 * Author: ana
 *
5-Escreva um algoritmo que solicite valores inteiros para uma matriz
de ordem 5. Após informados os números, calcule a soma das
colunas e a soma das linhas, registrando os valores em dois
vetores, um para as colunas e outro para as linhas. Por fim,
imprima a matriz e os vetores referentes às somas
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*
 * 
 */
int main() {
    int m[5][5];
    float col[5];
    float linha[5];
    int i, j, somaLinha, somaCol;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor para a %d linha e %d coluna: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);

            somaLinha = 0;
            somaLinha = somaLinha + m[i][j];
            linha[i] = linha[i] + somaLinha;

            somaCol = 0;
            somaCol = somaCol + m[i][j];
            col[j] = col[j] + somaCol;
        }
    }

    printf("\nMatriz:");
    for (i = 0; i < 5; i++) {
        printf("\n");
        for (j = 0; j < 5; j++) {
            printf(" %d ", m[i][j]);
        }
    }

    printf("\n");
    printf("\nSoma das linha:");
    for (i = 0; i < 5; i++) {
        printf("\n%0.1f", linha[i]);
    }
    
    printf("\n");
    printf("\nSoma das coluna:");
    for (j = 0; j < 5; j++) {
        printf("\n%0.1f", col[j]);
    }
    
    return (0);
}

