/*  
Pe�a ao usu�rio para digitar o nome do funcion�rio;
Pe�a ao usu�rio para digitar a quantidade de horas trabalhadas no m�s;
Pe�a ao usu�rio para digitar o valor da hora;
Execute a fun��o para calcular o valor total = valor da hora x horas trabalhadas;
Exibir na tela o cabe�alho e as informa��es do Nome, Quantidade de horas, Valor da hora e Valor total.
*/

#include <stdio.h>

void cabecalho();
float calcularValorSalario (float v1, float v2);

int main(){
	char funcionario[100];
	float hora_trabalho;
	float hora_valor;
	printf("Nome do funcionario: ");
	scanf("%s", &funcionario);
	printf("\nQuantidade de horas trabalhada no mes: ");
	scanf("%f", &hora_trabalho);
	printf("\nValor da hora de trabalho: ");
	scanf("%f", &hora_valor);
	float total = calcularValorSalario(hora_trabalho, hora_valor);
	
	cabecalho();
	printf("\nO funcionario %s trabalhou %.1f horas no mes", funcionario, hora_trabalho);
	printf("\nO valor da hora e de R$ %.1f", hora_valor);
	printf("\nO salario vai ser de R$ %.1f", total);
	
}

float calcularValorSalario (float v1, float v2){
	float total;
	total = v1 * v2;
	return total;
}

void cabecalho(){
	printf("=================================");
	printf("\n          UNICARIOCA           ");
	printf("\n===============================");
	return;
}
