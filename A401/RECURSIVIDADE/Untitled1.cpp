#include <stdio.h>
//2)- Fa�a um programa para ler: quantidade atual em estoque, quantidade m�xima em
//estoque e quantidade m�nima em estoque de um produto. Calcular e escrever a
//quantidade m�dia ((quantidade m�dia = quantidade m�xima + quantidade m�nima)/2).
//Se a quantidade em estoque for maior ou igual a quantidade m�dia escrever a
//mensagem 'N�o efetuar compra', sen�o escrever a mensagem 'Efetuar compra'.

void main(){
	int quant_atual, quant_max, quant_min;
	float  quant_media;
	
	printf("Informe a quantidade atual: \n");
	scanf("%d",&quant_atual);
	
    printf("Informe a quantidade maxima:");
	scanf("%d",&quant_max);
	
	printf("Informe a quantidade minima:");
	scanf("%d",&quant_min);
	
	quant_media = ((quant_max + quant_min)/2);
	
	if(quant_atual >= quant_media){
		printf("Nao efetuar a compra");
	}else{
		printf("Efetuar a compra");
	}
	
}


