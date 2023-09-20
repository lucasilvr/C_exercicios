/* 
Fa�a um programa interativo, que pe�a ao usu�rio para digitar n�meros inteiros e estes n�meros 
ser�o utilizados para preencher a matriz A.

Durante o preenchimento da matriz A, gerar a matriz B de modo que, toda vez que um n�mero negativo 
for digitado, inserir 0 (zero) na matriz B. Os demais n�meros ser�o iguais.
*/

#include <stdio.h>

int main(){
	
	int A[4][3], B[4][3];
	int i, j;
	
	
	for (i=0; i<4; i++){
		for (j=0; j<3; j++){
			printf("Digite um numero inteiro [%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
			if (A[i][j] < 0){
				B[i][j] = 0;
			}
			else {
				B[i][j] = A[i][j];
				}		
			}
		}
	
	printf("\nMATRIZ A\n");
	for (i=0; i<4; i++){
		for (j=0; j<3; j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMATRIZ B\n");
	for (i=0; i<4; i++){
		for (j=0; j<3; j++){
			printf("%d\t", B[i][j]);
	 	}
		printf("\n");
	}

	return 0;

}
