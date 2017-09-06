/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 16:50
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"


//FUNÇAO PRINCIPAL
int main(int argc, char** argv) {

    struct Livro l1;
    struct Livro l2;
    Aluno a1; //Aluno foi definida como typedef,...
    //...nao precisa citar que e struct.

    //Preenchendo dados do Livro 1.
    strcpy(l1.titulo, "Pragramaçao em C");
    strcpy(l1.autor, "Osvandre");
    strcpy(l1.assunto, "Computadores");
    l1.numtombo = 12345;
    l1.numExs = 10;

    //Preenchendo dados do Livro 2.
    strcpy(l2.titulo, "Estrutura de Dados");
    strcpy(l2.autor, "Osvandre");
    strcpy(l2.assunto, "Estrutura de Dados e Algoritmos");
    l2.numtombo = 54321;
    l2.numExs = 5;

    //Mostra dados dos Livros
    mostrarLivro(&l1);
    mostrarLivro(&l2);
    
    //Preenchendo doados do aluno
    a1.matricula = 11111;
    strcpy(a1.nome, "Jose da Silva");
    strcpy(a1.endereco, "Rua x, 123");
    strcpy(a1.fone, "(11) 1111-1111");
    
    //Mostrar dados do aluno
    mostrarAluno(a1);

    return (EXIT_SUCCESS);
}

