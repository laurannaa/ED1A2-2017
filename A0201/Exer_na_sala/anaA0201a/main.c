/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 22 de Agosto de 2017, 16:27
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int global1, global2, global3;

    
    //Realiza a soma de dois numeros inteiros
    //Parametros: num1 e num2 - numeros a serem somados
    //Retorno: resultado da soma
    
    printf("A soma 10 com 20 eh: %d\n",sum(10,20));
    
    global1 = 100;
    global2 = 200;  
    
    printf("A soma de global1 com global2 eh: %d\n", sum(global1 + global2));
    
    global3 = sum(1000,2000);
    
    printf("A soma de 1000 com 2000 (global3) eh: %d\n",global3);
    
    return (EXIT_SUCCESS);
}

void sum(int num1, int num2){
    
    int r;
    r = num1 + num2;
    return r;
    
}





