/* 
 * File:   main.cpp
 * Author: ana
 *

2-Com base no programa anterior crie um novo de forma que sejam
solicitados 10 nomes e 10 endereços.
Ao terminar a digitação o sistema entrará em um laço, solicitando 
um número referente à ordem de digitação realizada. 
Uma vez informado,o sistema deverá exibir o nome e o endereço
correspondente. Utilize apenas vetores. 
Caso o usuário informe um número fora do intervalo de 1 a 10, 
o sistema deverá alertar o usuário e solicitar a digitação
novamente (Lembre-se que em C 0 primeiro índice é 0, logo 1 irá
se referir ao elemento 0).
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {
    char end[10][100];
    char nome[10][50];
    int cont, num = 1;

    for (cont = 0; cont <= 9; cont++) {
        printf("Informe um nome: \n");
        gets(nome[cont]);
    }

    for (cont = 0; cont <= 9; cont++) {
        printf("Informe o endereço de %s: \n", nome[cont]);
        gets(end[cont]);
    }

    ////////////////////////
    while ((num >= 1) && (num <= 10)) {
        printf("\nInforme um número: ");
        scanf("%d", &num);

        while ((num < 1) || (num > 10)) {
            printf("\nValor inválido! Tente novamente!");
            printf("\nInforme um número: ");
            scanf("%d", &num);

            if (num == -1) {
                exit(0);
            }
        }

        printf("\nO nome armazenado eh: %s \n", nome[num - 1]);
        printf("\nO endereço armazenado eh: %s \n", end[num - 1]);

    }
    ////////////////////////
    
    return 0;
}

