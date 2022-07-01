	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C com um array de números inteiros com 10 
	   posições (tamanho 10). Obtenha 10 valores digitados pelo usuário. Calcule a soma
	   desses valores 10 após a leitura deles. O resultado da soma NÃO deve ser 
	   armazenado no array. Imprima esse resultado na tela. OBS: UTILIZE LAÇOS DE REPETIÇÃO */
	
	int main(int argc, char *argv[]) {
		int arrei[10];
		int i, soma = 0;
		
		for(i= 0; i < 10; i++){
		  printf("Digite um numero inteiro: ");
		  scanf("%d.", &arrei[i]);
		  soma += arrei[i];
		}
		printf("O resultado da soma e esse: %d.", soma);
		return 0;
	}
