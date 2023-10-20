#include<stdio.h>
#include<stdlib.h>

// funcao dada pelo exercicio
int mystrlen( char s[])
{
	int i;
// loop para descobrir quantos caracteres tem dentro da string independente do tamanho da string
	for (i=0; s[i] != '\0'; i++) ;

// retorna a quantidade de caracteres da string
return (i);
} 

int main()
{
// atribuicao da variavel string com valores
	char c[10]={1,2,3,4,5};
	
// chamada da funcao
	mystrlen(c);
// impressao da funcao
	printf("%d\n", mystrlen(c));
	
return 0;
}

