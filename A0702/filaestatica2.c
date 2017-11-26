/* 
 * File:   philaEstatica.c
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 17:46
 */

#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

/*
 * 
 */
int vazia(struct Fila q) {
    if (q.inicio == FILA_VAZIA) 
        return SIM;
    return NAO;
}

int cheia(struct Fila q) {
    if ((q.inicio == 0 && q.fim == MAX_ELEM-1 ) || (q.inicio == q.fim+1)){
    	return SIM;
    }
    return NAO;
}

void iniciarFila(struct Fila* q) {
    int i;
    for (i = 0; i < MAX_ELEM; i++) {
        q->elem[i] = 0;
    }
    q->fim = FILA_VAZIA;
    q->inicio = FILA_VAZIA;
    
}

char obterInicio(struct Fila q) {
    char dado = 0; 
    if (!vazia(q)) {
        dado = q.elem[q.inicio]; //Elemento da posiçao ZERO
    }
    return dado;
}

void listarElementos(struct Fila q){
    int i;
    int ordem;
    if(vazia(q)){
        printf("Fila vazia!!!");
    }else{
        printf("\n\n------- Conteudo da Fila -------");
        ordem = 1 ;
        for(i=q.inicio; i!=q.fim; i=((i+1)%MAX_ELEM)) {
            printf("\n[%i] = %c",ordem, q.elem[i]);
            ordem++;
        }
    }
}

int inserir(struct Fila* q, char e){
    if(!cheia(*q)){
        q->fim = (q->fim+1)%MAX_ELEM;
        q->elem[q->fim] = e;
    }else{
        return FILA_CHEIA;
    }
    return SUCESSO;
}


char remover(struct Fila* q){
    char e = ELEM_NULO;
    if(!vazia(*q)){
    	e = obterInicio(*q);
    	q->elem[q->inicio] = ELEM_NULO;
    	
    	if(q->inicio == q->fim){ 
            q->inicio = FILA_VAZIA;;
       	 	q->fim = FILA_VAZIA;
   		}else{
   			q->inicio = (q->inicio+1)%MAX_ELEM;
		}
	}
    
    return e;
}

int tamanho(struct Fila q){
	if(q.inicio <= q.fim){
		return q.fim - q.inicio+1;
	}
	return((MAX_ELEM-q.inicio) + (q.fim+1));
}


