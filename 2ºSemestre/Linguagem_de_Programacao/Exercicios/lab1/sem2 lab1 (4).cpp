#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void print_string(char *string);				// prototipo da funcao

int main()
{
	int l;									// declaracao das variaveis
	char p[80];
	
	printf("Digite uma palavra: ");				// atribuicao de valores na string
	scanf("%s", p);
	print_string(p);							// chamada da funcao

return 0;
}

void print_string(char *string)				// funcao para imprimir o string p usando o ponteiro string
{
	while(*string)					// estrutura para imprimir stirng(com endereco de p) ate o valor de string ser falso
		putchar(*string++);			// imprime o ponteiro string e adiciona +1 
}
