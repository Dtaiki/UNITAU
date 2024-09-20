#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrepy(char s[], char t[]);				// prototipo da funcao

int main()
{
	int l=0;									// declaracao das variaveis
	char p[80], p2[80];
	
	printf("Digite a primeira palavra: ");				// atribuicao de valores nas strings
	scanf("%s", p);
	printf("Digite a segunda palavra: ");
	scanf("%s", p2);
	mystrepy(p, p2);									// chamada da funcao

return 0;
}

int mystrepy(char s[], char t[])				// funcao para copiar a string2 na string1
{
	int i=0;								// declaracao das variaveis
	while((s[i]=t[i])!='\0')				// copia o valor de t em s enquanto o valor for diferente de '\0'
		i++;								// adiciona +1 em i
	i=0;
	
	while(s[i])							// estrutura para imprimir a string
	{
		printf("%c", s[i]);
		i++;
	}
}

