	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C com um array de n�meros inteiros com 4 posi��es 
	   (tamanho 4). Atribua os valores 40, 33, 3, 6 ao array. Depois fa�a as seguintes
	   opera��es e mostre os resultados na tela:
	   a. SOMAR: Valor da 1� posi��o com da 2� posi��o do array.
	   b. SUBTRA��O (MENOS): Valor da 1� posi��o com da 3� posi��o do array.
	   c. MULTIPLICA��O (VEZES): Valor da 2� posi��o com da 4� posi��o do array.
	   d. DIVIS�O: Valor da 4� posi��o com da 3� posi��o do array. */
	
	int main(int argc, char *argv[]) {
		int numeros[4] = {40, 33, 3, 6};
		int soma, subtracao, multiplicacao, divisao;
		
		soma = numeros[0] + numeros[1];
		subtracao = numeros[0] - numeros[2];
		multiplicacao = numeros[1] * numeros[3];
		divisao = numeros[3] / numeros[2];
		
		printf("A soma deu %d.", soma);
		printf("\nA subtracao deu %d.", subtracao);
		printf("\nA multiplicacao deu %d.", multiplicacao);
		printf("\nA divisao deu %d.", divisao);
		return 0;
	}
