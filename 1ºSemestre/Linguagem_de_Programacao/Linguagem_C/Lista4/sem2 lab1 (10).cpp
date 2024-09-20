#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void append(char *s1, char *s2);				// Protótipo da funcao

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

void append(char *s1, char *s2)				// funcao para acrescentar valores da string2 na string1 usando ponteiros
{
	while(*s1)				// estrutura para encontrar o final da string de s1(com endereco de p)
		s1++;
	while(*s1++=*s2++)		// copia valores de s2(com esndereco de p2) em s1(com endereco de p) ate s2 ser falso('\0')
	;
}
