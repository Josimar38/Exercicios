	#include <stdio.h>
	#include <stdlib.h>
	
	/* Fa�a um programa na linguagem C com 3 arrays de n�meros inteiros com 10 posi��es cada um. 
	   Obtenha do usu�rio os n�meros para os 2 primeiros arrays.Depois calcule a multiplica��o do 
	   primeiro array pelo segundo array, ou seja, multiplique os valores de mesmo �ndice. O 
	   resultado da multiplica��o deve ser armazena no 3� array. Observe abaixo como poderia ser 
	   feita a multiplica��o para os 3 primeiros valores: */
	
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
