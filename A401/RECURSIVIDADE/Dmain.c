#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe um numero: ");
    scanf("%d", &n);

    printf("O numero natural %d em binario eh: %d", n, bi(n));

    return (EXIT_SUCCESS);
}

int bi(int numero) {
    int binario, aux, digitos, potencia;
    aux = numero;
    binario = 0;
    potencia = 1;

    while (aux > 0) {
        digitos = aux % 2;
        aux = aux / 2;
        binario = binario + (digitos * potencia);
        potencia = potencia * 10;
    }

    return binario;
}
