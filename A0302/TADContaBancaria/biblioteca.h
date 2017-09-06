#ifndef BIBLIOTECA_H
#define	BIBLIOTECA_H
#include <stdio.h>

struct Conta {
    int numConta;
    char nomeCliente[50];
    float saldo;
};

void AbrirConta(struct Conta *c);
void LancarCredito(struct Conta *c);
void LancarSaque(struct Conta *c);
void ExibirDados(struct Conta *c);

#endif	/* BIBLIOTECA_H */

