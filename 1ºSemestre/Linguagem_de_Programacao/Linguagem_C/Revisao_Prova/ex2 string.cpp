#include<stdio.h>
#include<stdlib.h>

int contString(char *string, char l);

int main()
{
	char word[80], letra;
	
	printf("digite uma palavra: ");
	scanf("%s", &word);
	fflush(stdin);
	printf("digite uma letra: ");
	scanf("%c", &letra);
	printf("quantidade de '%c' na palavra = %d", letra, contString(word, letra));
	
return 0;
}

int contString(char* string, char letter)
{
	int l=0, cont=0;
	
	while(*(string+l)!='\0')
	{
		if(*(string+l)==letter)
			cont++;
		l++;
	}

return cont;
}
