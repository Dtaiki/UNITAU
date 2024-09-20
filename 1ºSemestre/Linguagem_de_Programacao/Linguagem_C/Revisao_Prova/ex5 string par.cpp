#include<stdio.h>
#include<stdlib.h>
#define N 80
int main()
{
	int l=0, tam=0;
	char word[N];
	
	printf("digite uma palavra: ");
	scanf("%s", &word);
	fflush(stdin);
	while(word[0+l]!='\0')
	{
		tam++;
		l++;
	}
	for(l=tam-1; l>=0; l=l-2)
	{
		printf("%c", word[l]);
	}

return 0;
}
