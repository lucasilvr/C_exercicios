/*1) O programa deve pedir ao usu�rio para digitar 10 n�meros inteiros e, para cada um deles, inserir o dado digitado em posi��es vizinhas de um vetor; 
2) Verificar quantos n�meros maiores que 10 foram digitados e exibir a quantidade na tela do computador. */

#include <stdio.h>

int main(){
	int vetor[10];
	int i = 0;
	int quantidade = 0;
	
	for (i; i<=9; i++){
		printf("Digite um numero inteiro: ");
		scanf("%d", &vetor[i]);
		if (vetor[i] > 10) {
		quantidade++;
			}
		}
		
	printf("Quantidade de numeros maiores que 10 digitados: %d", quantidade);
	return 0;
	}	
		
