#include "biblioteca.h"

void AbrirConta(struct Conta *c) {
    printf("Informe o nome: ");
    scanf("%s", &c->nomeCliente);

    printf("Informe o numero da conta: ");
    scanf("%d", &c->numConta);
    
    c->saldo = 0.00;
}

void LancarCredito(struct Conta *c) {
    float cdto;

    printf("Informe o valor: ");
    scanf("%f", &cdto);
    c->saldo = c->saldo + cdto;
}

void LancarSaque(struct Conta *c) {
    float saq;

    printf("Informe o valor do saque: ");
    scanf("%f", &saq);
    c->saldo = c->saldo + saq;
}

void ExibirDados(struct Conta *c) {
    printf("Nome......: %s\n", c->nomeCliente);
    printf("N° Conta..: %d\n", c->numConta);
    printf("Saldo.....: %f\n", c->saldo);
}
