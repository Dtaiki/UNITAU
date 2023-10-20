#include<stdio.h>
#include<stdlib.h>

int cletra(char *s, char letra);

int main()
{
	char string[50], letter;
	
	printf("escreva uma palavra: ");
	scanf("%s", &string);
	fflush(stdin);
	printf("digite uma letra: ");
	scanf("%c", &letter);
	printf("%d\n", cletra(string, letter));

return 0;
}

int cletra(char *s, char letra)
{
	int l, cont=0;
	
	for(l=0; *(s+l)!='\0'; l++)
	{
		if(*(s+l)!=letra)
			cont++;
	}

return cont;
}
