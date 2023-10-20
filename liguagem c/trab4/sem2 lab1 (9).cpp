#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void append(char s1[], char s2[]);				// Protótipo da funcao

int main()
{
	int l=0;									// declaracao das variaveis
	char p[80], p2[80];
	
	printf("Digite a primeira palavra: ");				// atribuicao de valores nas strings
	scanf("%s", p);
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	append(p, p2);										// chamada da funcao
	while(p[l])											// impressao da string p
	{
		printf("%c", p[l]);
		l++;
	}
	
return 0;
}

void append(char s1[], char s2[])				// funcao para acrescentar valores da string2 na string1
{
	int i=0, j=0;						// houve um erro ao inserir a variavel i=j=0.	declaracao das variaveis
	while(s1[i]!='\0')					// estrutura para encontrar o final da string s1
		i++;
	while(s1[i++]=s2[j++])				// copia valores de s2 em s1 ate s2 ser falso('\0')
	;
}
