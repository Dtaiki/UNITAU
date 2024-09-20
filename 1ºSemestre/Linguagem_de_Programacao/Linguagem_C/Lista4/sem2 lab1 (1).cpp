#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char s[]);				// prototipo da funcao

int main()
{
	int l;									// declaracao de variaveis inteiras e de caracteres
	char p[80];
	
	printf("Digite uma palavra: ");			
	scanf("%s", p);												// atribuindo valores a string
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e imprecao do resultado da funcao

return 0;
}

int mystrlen(char s[])				// funcao para contar quantos valores existem dentro da string
{
	int i;							// decalra variavel
	i=0;
	while(s[i]!='\0')				// estrutura de repeticao para adicao de +1 em i ate o final da string('\0')
		i++;
	
return i;				// retorno do valor da funcao 
}
