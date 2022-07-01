	#include <stdio.h>
	#include <stdlib.h>
	
	/* Faça um programa na linguagem C com 3 arrays de números inteiros com 10 posições cada um. 
	   Obtenha do usuário os números para os 2 primeiros arrays.Depois calcule a multiplicação do 
	   primeiro array pelo segundo array, ou seja, multiplique os valores de mesmo índice. O 
	   resultado da multiplicação deve ser armazena no 3º array. Observe abaixo como poderia ser 
	   feita a multiplicação para os 3 primeiros valores: */
	
	int main(int argc, char *argv[]) {
		int array1[10], array2[10], array3[10], i;
		
		for(i = 0; i < 10; i++){
		   printf(" Digite os numeros inteiros para colocar no array um: ");
		   scanf("%d", &array1[i]);
		   printf("\n");
		   printf(" Digite os numeros inteiros para colocar no array dois: ");
		   scanf("%d", &array2[i]);
		   printf("\n");
		}
		printf("Array tres:\n");
		for(i = 0; i < 10; i++){
		   printf(" %d\n", array3[i] = array1[i] * array2[i]);
	    }
	    
		return 0;
	}
