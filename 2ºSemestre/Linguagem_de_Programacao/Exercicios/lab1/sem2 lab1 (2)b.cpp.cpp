#include<stdio.h>				// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char s[]);				// prototipo da funcao

int main()
{
	int l;										// declaracao das variaveis
	char p[80];
	
	printf("digite uma palavra: ");								// atribuicao de valores na string
	scanf("%s", p);
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e impressao do resultado da funcao
	
return 0;
}

int mystrlen(char s[])				//  funcao para contar quantos valores existem dentro da string utilizando ponteiros
{
	int n;						// declaracao das variavel
	for(n=0; *s; s++)			// adiciona +1 em n e s ate o ponteiro s(com o endereco de memoria de p) for falso 
		n++;
	return n;				// retorno do valor de n
}
