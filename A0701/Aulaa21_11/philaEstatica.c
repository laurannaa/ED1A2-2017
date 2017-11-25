/* 
 * File:   philaEstatica.c
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 17:46
 */

#include <stdio.h>
#include <stdlib.h>
#include "philaEstatica.h"

/*
 * 
 */
int vazia(struct Fila q) {
    if (q.tamanho == 0) {
        return SIM;
    }
    return NAO;
}

int cheia(struct Fila q) {
    if (q.tamanho == MAX_ELEM) {
        return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila *q) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        q->elem[i] = ELEM_NULO;
    }
    q->tamanho = 0;
}

char obterInicio(struct Fila q) {
    char dado = ELEM_NULO; //Ou 0 tanto faz
    if (!vazia(q)) {
        dado = q.elem[0]; //Elemento da posiçao ZERO
    }
    return dado;
}

void listarElementos(struct Fila q){
    int i;
    if(vazia(q)){
        printf("Fila vazia!!!");
    }else{
        printf("\n\n------- Conteudo da Fila -------");
        for(i=0; i<q.tamanho; i++){
            printf("\n[%i] = %c", i, q.elem[i]);
        }
    }
}

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){
        q->elem[q->tamanho] = e;
        q->tamanho++;
    }else{
        return FILA_CHEIA;
    }
    return SUCESSO;
}


char remover(struct Fila* q){
    int i;
    char e = ELEM_NULO;
    e = obterInicio(*q);
    if(e != ELEM_NULO){ //SE OBTER ELEM EH PQ TINHA ELEM
        for(i=0; i<(q->tamanho-1); i++){
            q->elem[i] = q->elem[i+1];//lembra do z
        }
        q->elem[q->tamanho] = ELEM_NULO;
        q->tamanho--;
    }
    return e;
}



