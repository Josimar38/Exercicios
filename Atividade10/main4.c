	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C que deve obter do usuário o nome do produto, o 
	   preço por unidade do produto e a quantidade que o usuário quer comprar desse 
	   produto. Ao final seu programa deve mostrar na tela o nome do produto com o valor 
	   total a ser cobrado do usuário.*/
	
	int main(int argc, char *argv[]) {
		char nomeProduto[10];
		int quantidadeProduto;
		float precoUnidade, valorPagar = 0;
		
		printf("Digite o nome do produto: ");
		gets(nomeProduto);
		
		printf("Digite o preco do produto por unidade: ");
		scanf("%f", &precoUnidade);
		
		printf("Digite quantidade do produto: ");
		scanf("%d", &quantidadeProduto);
		
		valorPagar = precoUnidade * quantidadeProduto;
		
		printf("Voce comprou %s e o total a pagar eh R$ %.2f", nomeProduto, valorPagar);
		
		return 0;
	}
