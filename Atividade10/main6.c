	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C com um array para armazenar o pre�o de 15
	   produtos. Pe�a para o usu�rio digitar o pre�o desses 15 produtos, armazene esses 
	   valores no array criado. Posteriormente mostre o �ndice e pre�o do produto lado a 
	   lado. Pe�a ao usu�rio que escolha um �ndice. Depois mostre na tela o pre�o do 
	   produto que corresponde ao �ndice escolhido pelo usu�rio */
	
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
