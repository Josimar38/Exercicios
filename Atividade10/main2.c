		#include <stdio.h>
		#include <stdlib.h>
		
		/* Fa�a um programa na linguagem C com um array de n�meros inteiros 
		com 4 posi��es (tamanho 4). Obtenha 3 valores digitados pelo usu�rio e 
		armazene no array (�ndices 0 at� 2). Calcule a soma desses 3 valores, 
		o resultado deve ser armazenado na �ltima posi��o do array. Imprima o 
		resultado na tela. OBS: N�O UTILIZE LA�O DE REPETI��O */
		
		int main(int argc, char *argv[]) {
			int usuario[4];
			int i = 0;
			int soma = 0;
			printf("Digite um numero inteiro: ");
			scanf("%d", &usuario[0]);
			
			printf("Digite um numero inteiro: ");
			scanf("%d", &usuario[1]);
			
			printf("Digite um numero inteiro: ");
			scanf("%d", &usuario[2]);
			
			soma = usuario[0] + usuario[1] + usuario[2];
			usuario[3] = soma;
			soma = usuario[0] + usuario[1] + usuario[2] + usuario[3];
			printf("A soma dos valores deu %d.\n", soma);
			printf("O valor no indice um eh %d.\nO valor no indice dois eh %d.\nO valor no indice tres eh %d.\nO valor no indice quatro eh %d.", usuario[0], usuario[1], usuario[2], usuario[3]);
			
			return 0;
		}
