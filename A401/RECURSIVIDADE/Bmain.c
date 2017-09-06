#include <stdio.h>
#include <stdlib.h>


/* A sequ�ncia de Fibonacci representa outra fun��o matem�tica
recursiva. No caso ela define uma sequ�ncia de n�meros que se
lan�ados em um plano cartesiano desenham um espiral capaz de
ser detectado, por exemplo, nas curvas dos carac�is. Seja X a
fun��o Fibonacci. Xn = Xn-1 + Xn-2 Por exemplo: X7 = 5 + 8 = 13

Escreva um programa em C com uma fun��o recursiva que calcule o valor
referente � fun��o Fibonacci de um n�mero inteiro qualquer passado
como par�metro.
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



