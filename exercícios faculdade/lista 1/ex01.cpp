//Fa�a um programa que utilize a estrutura de repeti��o for, de modo que o trecho de c�digo mostrado abaixo seja executado por cinco vezes

#include <stdio.h>

int main () {
	char nome[20];
	float media;
	int i = 1;
	
	for (i; i<=5; i++) {
		
		printf("\nDigite o nome do aluno: ");
		scanf("%s", nome);
		printf("Digite a media final do aluno: ");
		scanf ("%f", &media);
		if (media >= 7) {
			printf("\nAprovado!\n");
		}
		else {
			printf("\nReprovado!\n");
		}
	}
	return 0;
}
