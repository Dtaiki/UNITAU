#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char s[]);				// prototipo da funcao

int main()
{
	int l;									// declaracao das variaveis
	char p[80];
	
	printf("digite uma palavra: ");								// atribuicao de valores na string
	scanf("%s", p);
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e impressao do resultado da funcao
	
return 0;
}

int mystrlen(char s[])				//  funcao para contar quantos valores existem dentro da string utilizando ponteiros
{
	char *p=s;					// declaracao de variavel e atribui o endereco de memoria de s no ponteiro p
	while(*p!='\0')				// estrutura para adicionar +1 em p ate o ponteiro encontrar o final da string s
		p++;

return (p-s);					// retorno do resultado entro o valor do ultimo endereco de memoria menos o valor do primeiro endereco de memoria do s, sendo o resultado a quantidade de variaveis na string	
}
