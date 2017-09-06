#include "biblioteca.h"

// Formata a exibiçao de um registro Livro
void mostrarLivro(struct Livro *l) {
    printf("\n---------- LIVRO ----------\n");
    printf("Titulo......: %s\n", l->titulo);
    printf("Autor.......: %s\n", l->autor);
    printf("Assunto.....: %s\n", l->assunto);
    printf("N° Tombo....: %d\n", l->numtombo);
    printf("Exemplares..: %d\n", l->numExs);
}

void mostrarAluno(Aluno al) {
    printf("\n---------- ALUNO ----------\n");
    printf("Matricula...: %d\n", al.matricula);
    printf("Nome........: %s\n", al.nome);
    printf("Endereço....: %s\n", al.endereco);
    printf("Telefone....: %s\n", al.fone);
}

