/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 22 de Agosto de 2017, 17:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int global1, global2, global3;
    
    //Realiza um operaçao com os parametros, alterando-os.
    //Parametros: num1, num2 e num3 - numeros a serem alterados no processamento
    
    global1 = 1;
    global2 = 2;
    global3 = 3;
    
    processaNumeros(global1, global2, &global3);
    printf("Valor de global1 apos processaNumeros eh: %d\n", global1);
    printf("Valor de global2 apos processaNumeros eh: %d\n", global2);
    printf("Valor de global3 apos processaNumeros eh: %d\n", global3);

    return (EXIT_SUCCESS);
}

void processaNumeros(int num1, int num2, int *num3){
    num1 = num1 * 10;
    num2 = num2 * 100;
    *num3 = (*num3) * 1000;
    
    printf("Em processaNumeros (global1 -> num1) vale: %d\n",num1);
    printf("Em processaNumeros (global2 -> num2) vale: %d\n",num2);
    printf("Em processaNumeros (global3 -> num3) vale: %d\n",*num3);
    //int num *num3;
    
}
