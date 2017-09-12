#include <stdio.h>
#include <stdlib.h>

int main() {
    int mult, num;

    printf("Informe a quantidade de vezes que deseja que o numero seja multiplicado: ");
    scanf("%d", &mult);
    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("O resultado da multiplicacao dos numeros sao: %d", multi(mult, num));

    return (EXIT_SUCCESS);
}

int multi(int m1, int n1) {
    int i, ant, prox, res = 0;
    ant = 0;
    prox = n1;

    for (i = 1; i <= (m1 + 1); i++) {
        res = res + ant;
        ant = prox;
        prox = n1;
    }

    return res;
}
