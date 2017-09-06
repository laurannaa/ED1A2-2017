#include <stdio.h>
#include <stdlib.h>


/* A sequência de Fibonacci representa outra função matemática
recursiva. No caso ela define uma sequência de números que se
lançados em um plano cartesiano desenham um espiral capaz de
ser detectado, por exemplo, nas curvas dos caracóis. Seja X a
função Fibonacci. Xn = Xn-1 + Xn-2 Por exemplo: X7 = 5 + 8 = 13

Escreva um programa em C com uma função recursiva que calcule o valor
referente à função Fibonacci de um número inteiro qualquer passado
como parâmetro.
 */
/*
1,2,3,5,8,13,21,34,55.....
1 = 1 +1
2 = 2+1
3 = 3+2
5 = 5+8
13 = 13+8
21 = 21+13
34 = 34+21
55 = 55+34
89*/

int main() {
	int numero;

	scanf("%d",&numero);
	
	printf("O %d. da seq de Fibonacci eh %li\n\n = %d",numero, fibonacci(numero));
	return 0;
}

int fibonacci (int num){
	
	int ante, atual, prox;
	int i;
	
	for(i = 0; i < num; i++){
		
		prox = atual + ante;
		ante = atual;
		atual = prox;
	}
	
	return atual;

}



