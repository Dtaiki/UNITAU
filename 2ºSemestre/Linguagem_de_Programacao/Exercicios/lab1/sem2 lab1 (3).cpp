#include<stdio.h>				// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char *string);				// prototipo da funcao

int main()
{
	int l;										// declaracao das variaveis
	char p[80];
	
	printf("Digite uma palavra: ");								// atribuicao de valores na string
	scanf("%s", p);
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e impressao do resultado da funcao

return 0;
}

int mystrlen(char *string)				//  funcao para contar quantos valores existem dentro da string utilizando ponteiros
{
	int count;						// declaracao de variavel
	count = 0;
	while(*string++!=NULL)			// adiciona +1 em count e +2 em string ate o ponteiro string(com endereco de p) ter um valor nulo
	{
		count++;					// existe 2 string++ dentro da estrutura, entao o valor sera a metade do esperado
		string++;
	}

return count;				// retorna o valor de count
}

