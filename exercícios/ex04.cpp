// Fa�a um programa para calcular o fatorial de um n�mero digitado pelo usu�rio
#include <stdio.h>

int main () {
	int count,fat, result = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &fat);

	for (count = 1; count<= fat; count++ ) {
		result *= count;	
	}
	
	printf("%d", result);
	return 0;
}
