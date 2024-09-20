#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void mystrepy(char *s, char *t);				// prototipo da funcao

int main()
{
	int l;									// declaracao das variaveis
	char p[80], p2[80];
	
	printf("Digite a primeira palavra: ");				// atribuicao de valores nas strings
	scanf("%s", p);
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	mystrepy(p, p2);									// chamada da funcao
	while(p[l])											// estrutura que imprime a string p
	{
		printf("%c", p[l]);
		l++;
	}
		
return 0;
}

void mystrepy(char *s, char *t)				// funcao para copiar a string2 na string1 usando ponteiros
{
	while(*s++=*t++)				// copia o ponteiro t(com endereco de p2) no ponteiro s(com endereco de p)
	;
}

