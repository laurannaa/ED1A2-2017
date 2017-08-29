/* 
 * File:   main.cpp
 * Author: ana
 *
3-Escreva um programa que solicite a digitação de no máximo 10
números, representando valores de 0 a 100. Valores fora desta
faixa não são aceitos e o valor -1 encerra digitação, caso o usuário
pretenda digitar menos que 10 números. Contudo, se ele digitar 10
números o programa deixa de solicitar novos números. Digitando
10 números ou não, o programa deve mostrar quantos números
foram informados, quais são o pares e quais são os ímpares.
 */

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

main() {
    int numero[10], i = 0, cont = 0, num;

    do {
        printf("\nInforme um número entre 0 e 100: ");
        scanf("%d", &num);

        if ((num >= 0) && (num <= 100)) {
            numero[cont] = num;
            cont++;
        } else {
            if (num == -1) {
                break;
            } else {
                printf("Numero invalido! Tente novamente!");
            }
        }
    } while (cont < 10);

    printf("\nForam informados %d números.", cont);

    printf("\nNúmeros pares: ");
    for (i = 0; i < cont; i++) {
        if (numero[i] % 2 == 0) {
            printf("\n%d", numero[i]);
        }
    }

    printf("\nOs números ímpares são: ");
    for (i = 0; i < cont; i++) {
        if (numero[i] % 2 != 0) {
            printf("\n%d", numero[i]);
        }
    }

    return (0);

}


