#include <stdio.h>
#include <stdlib.h>

int mystrcmp (char s1[], char s2[]);
 
int main()
{
	char resposta[]="marsupial";
	char resp[40];
	
	printf("Teste de string comparativo\n");
	printf("oque e um gamba?\n");
	gets(resp);
	while (mystrcmp(resp,resposta) != 0)
	{
		printf("Errada\n");
		gets(resp);
	}
	printf("Correto\n");

system("PAUSE");
return 0;
}

int mystrcmp (char s1[], char s2[])
{
	int i = 0;
	while ( s1[i] == s2[i])
	if (s1[i++] == '\0') return (0) ;

return (s1[i] - s2[i]);
}

