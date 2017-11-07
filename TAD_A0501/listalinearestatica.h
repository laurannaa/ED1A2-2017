/* 
 * File:   listalinear.h
 * Author: aluno
 *
 * Created on 26 de Setembro de 2017, 16:32
 */

#ifndef LISTALINEAR_H
#define	LISTALINEAR_H
#define MAX_ELEM 10 //N° MAX de elementos na lista 
#define POS_FINAL -1 //N° Numero absurdo no contexto.
                     //Indica qualquer posiçao final logica na lista

#define NAO_ENCONTRADA -1

// --- Estrutura de dados ---
struct Lista{
    int n;
    char elem[MAX_ELEM];
};

// --- Funçoes referentes a operaçoes exemplo ---
void iniciarLista(struct Lista*);
char acessar(struct Lista, int);
void alterar(struct Lista*, int, char);
void inserir(struct Lista*, int, char);
void remover(struct Lista*, int);
void concatenar(struct Lista*, struct Lista*);
void inverter(struct Lista*);
struct Lista subLista(struct Lista, int, int);
void inserirOrdenado(struct Lista*, char);
void mostrarLista(struct Lista);
int localizar(struct Lista, char);
struct Lista intercalar(struct Lista, struct Lista);




#endif	/* LISTALINEAR_H */

