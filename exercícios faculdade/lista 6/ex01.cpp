/*1) Pe�a ao usu�rio para digitar um n�mero inteiro, referente � quantidade de alunos;
2) Crie um ponteiro do tipo float e aloque, dinamicamente, a quantidade de mem�ria
indicada pelo n�mero digitado pelo usu�rio;
3) Use a estrutura de repeti��o for para inserir as notas dos alunos na vari�vel criada
dinamicamente;
4) Para fins did�ticos, use outra estrutura de repeti��o for para exibir as notas dos alunos
que foram digitadas*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int qnt, i;
	printf("Digite o numero de alunos: ");
	scanf("%d", &qnt);
	fflush(stdin);
	float *notas = (float *)malloc(qnt*sizeof(float));
	
	for (i = 0; i<qnt; i++){
		printf("\nDigite a nota do aluno %d: ", i);
		scanf("%f", &notas[i]);
	}
	
	for (i = 0; i<qnt; i++){
		printf("\nnotas[%d] = %.1f", i, notas[i]);
	}
	
	free(notas);
	return 0;
}

