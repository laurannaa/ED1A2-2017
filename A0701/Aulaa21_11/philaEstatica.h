/* 
 * File:   philaEstatica.h
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 17:32
 */

#ifndef PHILAESTATICA_H
#define	PHILAESTATICA_H
#define SIM 1
#define NAO 0
#define SUCESSO 0
#define MAX_ELEM 10
#define FILA_VAZIA -1

#define FILA_CHEIA -2
#define ELEM_NULO 0

// --- Estrutura de dados ---
struct Fila{
    int tamanho; //Controla quantos elementos tem na fila
    char elem[MAX_ELEM]; // Elementos da fila
};

// --- Funçoes referentes a operaçoes exemplo ---
int vazia(struct Fila);
int cheia(struct Fila);
void iniciarFila(struct Fila*);
char obterInicio(struct Fila);
void listaElementos(struct Fila);
int inserir(struct Fila*, char); //Enquete - sempre em tamanho+1
char remover(struct Fila*);




#endif	/* PHILAESTATICA_H */

