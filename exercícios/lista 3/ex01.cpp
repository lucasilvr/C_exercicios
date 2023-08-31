/* 
1)	Pe�a ao usu�rio para digitar um n�mero;
2)	Fa�a uma fun��o que calcule o fatorial deste n�mero de forma iterativa;
3)	Mostre o resultado do fatorial do n�mero na tela do computador.
*/

#include <stdio.h>

int fatorial (int num);

int main () {
	int num;
	int resultado;
	printf("Digite um numero: ");
	scanf("%d", &num);
	resultado = fatorial(num);
	printf("O fatorial de %d: %d", num, resultado);
	
}

int fatorial(int num) { 
	int i = 1;
	int res = 1;
	
	for (i; i<= num; i++) {
		res *= i;
	}
	return res;
	}
