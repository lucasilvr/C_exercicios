//Fa�a um c�digo para contar o n�mero de vezes que a letra "a" aparece em uma palavra qualquer digitada pelo usu�rio

#include <stdio.h>

main () {
	int i, count = 0;
	char palavra[100];
	
	printf("\nDigite uma palavra: ");
	scanf("%s", palavra);
	
	for (i; palavra[i] != '\0'; i++) {
		
		if (palavra[i] == 'a') {
			count = count + 1; 
		}
	}
	printf("O n�mero de vezes que o caractere 'a' aparece: %d veze(s)", count);
}

