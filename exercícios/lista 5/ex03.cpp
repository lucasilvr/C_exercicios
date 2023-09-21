/*
Fa�a um programa interativo, que pe�a ao usu�rio para digitar n�meros inteiros e estes n�meros ser�o utilizados para preencher uma matriz A (4x4).
Identifique qual foi o maior n�mero digitado e mostre-o na tela do computador. 
Identifique qual foi o menor n�mero digitado e mostre-o na tela do computador.
*/

#include <stdio.h>

int main(){
	
	int A[4][4], maior =0, menor=0, i, j;

	for (i= 0; i<4; i++){
		for (j = 0; j<4; j++){
			printf("Digite um numero inteiro [%d][%d]: ", i,j);
			scanf("%d", &A[i][j]);
			
			if (A[i][j] > maior) {
				maior = A[i][j];	
			}
			
			if (A[i][j] < menor) {
				menor = A[i][j];
			}
		}
	}
	
	printf("\nMaior numero digitado: %d", maior);
	printf("\nMenor numero digitado: %d", menor);
	
	return 0;
}
