//Fa�a um c�digo que utilize uma fun��o para calcular o fatorial de um n�mero digitado pelo usu�rio e mostrar o resultado na tela

#include <stdio.h>

int fatorial(int num);

int main(){
	
	int num, result;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	result = fatorial(num);
	printf("o fatorial de %d e igual a %d", num, result);
}

int fatorial(int num){
	int i = 1;
	int valor = 1;
	for (i; i<= num; i++){
		valor = valor * i;
	}
	
	return valor;
}
