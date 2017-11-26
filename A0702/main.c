/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 21 de Novembro de 2017, 17:29
 */

#include <stdio.h>
#include <stdlib.h>
#include "filaestatica2.h"

/*
 * 
 */
int main(int argc, char** argv) {

   struct Fila q;
   int op = 0;
   char elemento;
   
   do {
       printf("\nInforme a opção desejada:"
               "\n1 - Fila vazia"
               "\n2 - Fila cheia"
               "\n3 - Iniciar Fila"
               "\n4 - Obter início"
               "\n5 - Listar elementos"
               "\n6 - Inserir elemento"
               "\n7 - Remover elemento"
               "\n8 - Tamanho da fila"
               "\n9 - Sair"
               "\n.: ");
       scanf("%d", &op);
       switch (op) {
           case 1:
               vazia(q);
               break;
           case 2:
               cheia(q);
               break;
           case 3:
               iniciarFila(&q);
               break;
           case 4:
               obterInicio(q);
               break;
           case 5:
               listarElementos(q);
               break;
           case 6:
               printf("\nInforme o elemento a ser inserido na Fila: ");
               scanf("%s", &elemento);
               inserir(&q, elemento);
               break;
           case 7:
               remover(&q);
               break;
           case 8:
		   		tamanho(q);
		   		break;
           case 9:
               break;
       }
   } while (op != 9);
   
   return (EXIT_SUCCESS);
}

