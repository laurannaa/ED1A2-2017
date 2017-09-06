#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"

/* 
Implemente um TAD envolvendo estrutura de dados e operações
para o caso de uma Conta Bancária.

Os dados para a conta são:
a) Número da conta (int);
b) Nome do cliente (char*); e
c) Saldo (float).

As operações a serem disponibilizadas são:
a) Abrir conta - cria a conta conforme número e nome passados
por parâmetro e define saldo para 0.00;
b) Lançar credito - soma um valor de lançamento do saldo atual da
conta;
c) Lançar débito - subtrai um valor de lançamento do saldo atual
da conta;
d) Exibir Saldo - mostra os dados da conta e o saldo corrente.
 */


int main(int argc, char *argv[]) {
    int op;
    struct Conta c1;

    do {

        do {
            printf("\nInforme a opcao desejada: \n");
            printf("\n1-Abrir conta.");
            printf("\n2-Lancar credito.");
            printf("\n3-Lancar debito.");
            printf("\n4-Exibir saldo.");
            printf("\n0-Sair.\n");
            scanf("%d", &op);
        } while ((op > 4) || (op < 0));

        if (op == 1) {
            AbrirConta(&c1);

        } else {
            if (op == 2) {
                LancarCredito(&c1);

            } else {
                if (op == 3) {
                    LancarSaque(&c1);
                    
                } else {
                    if (op == 4) {
                        ExibirDados(&c1);
                    }
                }
            }
        }
    } while (op != 0);

    return 0;
}




