/* 
 * File:   pilhaestatica.h
 * Author: aluno
 *
 * Created on 24 de Outubro de 2017, 19:18
 * LIFO: O ULTIMO A ENTRAR E O PRIMEIRO A SAIR
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef PILHAESTATICA_H
#define	PILHAESTATICA_H
#define SIM 1 
#define NAO 0
#define MAX_ELEM 10
#define PILHA_VAZIA -1
#define PILHA_CHEIA -2

//////////////////////////////////////////////////////////

struct Pilha {
    int topo;
    char elem[MAX_ELEM];
};

//////////////////////////////////////////////////////////
int vazia(struct Pilha);
int cheia(struct Pilha);
void iniciarPilha(struct Pilha*);
char obterTopo(struct Pilha);
void listarElementos(struct Pilha);
int inserir(struct Pilha*, char);
char remover(struct Pilha*);

#endif	/* PILHAESTATICA_H */

