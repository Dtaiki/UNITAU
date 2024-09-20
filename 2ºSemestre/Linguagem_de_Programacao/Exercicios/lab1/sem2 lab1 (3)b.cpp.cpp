#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char *string);				// prototipo da funcao

int main()
{
	int l;									// declaracao das variaveis
	char p[80];
	
	printf("Digite uma palavra: ");								// atribuicao de valores na string
	scanf("%s", p);
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e impressao do resultado da funcao

return 0;
}

int mystrlen(char *string)				//  funcao para contar quantos valores existem dentro da string utilizando ponteiros
{
	int count;								// declaracao de varivel
	for(count=0; *string++; count++)		// adiciona +1 em count e string ate o ponteiro string(com endereco de p) ser falso
	;
	
return count;				// retorna valor de count
}

