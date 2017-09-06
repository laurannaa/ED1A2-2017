#include <stdio.h>
//2)- Faça um programa para ler: quantidade atual em estoque, quantidade máxima em
//estoque e quantidade mínima em estoque de um produto. Calcular e escrever a
//quantidade média ((quantidade média = quantidade máxima + quantidade mínima)/2).
//Se a quantidade em estoque for maior ou igual a quantidade média escrever a
//mensagem 'Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.

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


