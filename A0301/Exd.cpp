/* 
 * File:   main.cpp
 * Author: ana
 *
4-Implemente um programa que solicite 5 números e os armazene
em um vetor A. Em seguida o programa deve solicitar mais 5
números e armazená-los em um vetor B. Por fim, o programa
deverá preencher um vetor C, intercalando os valores do vetor A e
do vetor B.
 */

#include <cstdlib>
#include <stdio.h>

using namespace std;

/*
 * 
 */
int main() {
    int vetorA[5];
    int vetorB[5];
    int vetorC[10];
    int cont, i=0;

    for (cont = 0; cont < 5; cont++) {
        printf("Informe um numero para o vetor A: \n");
        scanf("%d", &vetorA[cont]);
    }
    for (cont = 0; cont < 5; cont++) {
        printf("Informe um numero para o vetor B: \n");
        scanf("%d", &vetorB[cont]);
    }

    for (cont = 0; cont < 10; cont++){
        if (i % 2 == 0){
            vetorC[cont] = vetorA[cont- i];
            i++;
        }else{
            vetorC[cont] = vetorB[cont/2];
        }
          
    }
    
    printf("\nVetor C: ");
    for(cont = 0; cont < 10; cont++){
        printf("\n%d", vetorC[cont]);
    }

    return 0;
}

