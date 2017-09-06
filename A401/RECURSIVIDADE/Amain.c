#include <stdio.h>
#include <stdlib.h>

/* a) Implemente o algoritmo de exemplo de recursividade, mostrado
anteriormente, na forma de uma função que calcula o valor da
função Fatorial de um número n qualquer */

int main() {
	int numero;
	
	printf("Informe um numero:");
	scanf("%d",&numero);
	
	printf("O fatorial de %d = %d", numero, fatorialNum(numero));
		
	return 0;
}

int fatorialNum (int num){
	if(num <= 1){
		return 1;
	}else{
		return num * fatorialNum(num - 1);
	}
}
