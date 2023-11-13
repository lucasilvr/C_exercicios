/* 
Fa�a um programa em Linguagem C que atenda aos seguintes requisitos:
1) Pe�a ao usu�rio para digitar um n�mero N;
2) Fa�a uma fun��o que calcule a soma dos n�meros de 1 a N, de forma recursiva;
3) Mostre o resultado da soma na tela do computador. 
*/

#include <stdio.h>

int soma(int);

int main(){
	int num;
	int resultado;
	printf("Digite um numero: ");
	scanf("%d", &num);
	resultado = soma(num);
	printf("O resultado da soma: %d", resultado);
}

int soma(int n){
	int res;
	if (n == 0) {
		return 0;
	}
	else {
		return n + soma(n-1);
	}
}
