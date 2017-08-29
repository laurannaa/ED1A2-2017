/* 
 * File:   main.cpp
 * Author: ana
 *
 
1-Escreva um algoritmo que solicite 10 nomes e os armazene em um
vetor. Após informados os nomes o sistema deverá exibir uma
listagem completa dos nomes informados incluindo o índice e o
nome correspondente (note-se que em C o índice inicia em 0).
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {
    char vetor[10];
    int cont;

    for (cont = 0; cont <= 9; cont++) {
        printf("Informe um nome: ");
        gets(vetor[cont]);
    }

    for (cont = 0; cont <= 9; cont++) {
        printf("\nO nome armazenado em %d eh: %c\n", cont, vetor[cont]);
    }

    return 0;
}

