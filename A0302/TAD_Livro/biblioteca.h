#ifndef BIBLIOTECA_H
#define	BIBLIOTECA_H
#include <stdio.h>

// Declaraçao da Estrutura Livro.
struct Livro {
    char titulo[50];
    char autor[30];
    char assunto[100];
    int numtombo;
    int numExs;
};

// Declaraçao de um novo tipo de dado, em struct
typedef struct {
    int matricula;
    char nome[30];
    char endereco[100];
    char fone[15];
} Aluno;

//Prototipos das funçoes
void mostrarLivro(struct Livro *l);
void mostrarAluno(Aluno al);

#endif	/* BIBLIOTECA_H */

