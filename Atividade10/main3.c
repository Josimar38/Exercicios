	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C com um array de n�meros inteiros com 10 
	   posi��es (tamanho 10). Obtenha 10 valores digitados pelo usu�rio. Calcule a soma
	   desses valores 10 ap�s a leitura deles. O resultado da soma N�O deve ser 
	   armazenado no array. Imprima esse resultado na tela. OBS: UTILIZE LA�OS DE REPETI��O */
	
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
