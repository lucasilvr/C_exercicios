//Exercicio de somar duas matrizes
#include <stdio.h>

int main(){
	
	int A[2][2] = {{1,2}, {3,4}};
	int B[2][2] = {{5,6}, {7,8}};
	int C[2][2];
	
	C[0][0] = A[0][0] + B[0][0];
	C[0][1] = A[0][1] + B[0][1];
	C[1][0] = A[1][0] + B[1][0];
	C[1][1] = A[1][1] + B[1][1];
	
	printf("%d %d ", C[0][0], C[0][1]);
	printf("\n%d %d", C[1][0], C[1][1]);
	
	
}
