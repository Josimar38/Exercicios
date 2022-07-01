	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C com um array para armazenar o preço de 15
	   produtos. Peça para o usuário digitar o preço desses 15 produtos, armazene esses 
	   valores no array criado. Posteriormente mostre o índice e preço do produto lado a 
	   lado. Peça ao usuário que escolha um índice. Depois mostre na tela o preço do 
	   produto que corresponde ao índice escolhido pelo usuário */
	
	int main(int argc, char *argv[]) {
		int preco[15], i, indice;
		
		for(i = 0; i < 15; i++){
		   printf(" Digite o preco dos produtos: ");
		   scanf("%d", &preco[i]);
		}
		
		printf("  Indice      Preco\n");
		
		for(i = 0; i < 15; i++){
		   printf(" %4d %12d\n", i, preco[i]);
		}
		
		printf("Escolha um indice que lhe mostrarei o preco do produto: ");
		scanf("%d", &indice);
		
		for(i = 0; i < 15; i++){
		   if(preco[i] == indice){
		      printf("O preco do produto eh %d", preco[i]);
		      break;
		   }
		}
		
		return 0;
	}
