#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int numero;
	
	printf("Informe um numero: ");
	scanf("%d",&numero);
	
	printf("O fatorial de %d = %d", numero, fat(numero));
	
	return 0;
	
	
}
//fat � a vari�vel fatorial
int fat (int num){
	
	if(num <= 1){
		return 1;
	}else{
		return num * fat (num - 1);
	}
	
}
