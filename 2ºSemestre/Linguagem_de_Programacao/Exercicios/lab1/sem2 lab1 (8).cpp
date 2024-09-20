#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrcmp(char s1[], char s2[]);				// Protótipo da funcao

int main()
{
	int l;									// declaracao das variaveis
	char p[80], p2[80];
	
	printf("Digite a primeira palavra: ");				// atribuicao de valores nas strings
	scanf("%s", p);
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	printf("%d", mystrcmp(p, p2));						// chamada e impressao do valor da funcao
	
return 0;
}

int mystrcmp(char *s1, char *s2)				// funcao para retornar um valor negativo se s2>s1 ou positivo se s1>s2 caso as strings sejam diferentes ou 0 caso sejam iguais	usando ponteiros	
{
	for(; *s1==*s2; s1++, s2++)				// estrutura para comparar o ponteiro s2(com endereco de p2) com o ponteiro s1(com ponteiro de p) e adicionar +1 em s1 e s2 ate s1 e s2 ser diferentes
	{
		if(*s1=='\0')				// estrutura de decisao para ver se s1 chegou no final da string e retornar 0
			return 0;
	}

return (*s1-*s2);				// reotrna valor negativo ou positivo caso a quantdade de valores nas strings forem diferentes
}

