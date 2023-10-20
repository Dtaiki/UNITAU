#include <stdio.h>
#include <stdlib.h>

void mystrcpy (char s[], char t[]);
 
int main()
{
	char string2[40]="alo al";
	char string1[40]="xo";
	
	printf("Teste de string copy ");
	printf("\nstring1= %s string2= %s", string1, string2);
	mystrcpy(string1, string2);
	printf("\nstring1= %s string2= %s\n", string1, string2);
	system("PAUSE");

return 0;
}

void mystrcpy (char s[], char t[])
{
	int i=0;
	while ( (s[i] = t[i]) != '\0')
	i++;
}

