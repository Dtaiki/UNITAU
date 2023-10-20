#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	FILE *fp;							// atribuicao de variaveis
	char filename[80];
	int c, i, letter[26]={0};
	
	printf("Enter filename: ");
	scanf("%s", filename);
	fp= fopen(filename, "r");							// abre um arquivo		digitar letras.txt
	if(fp==NULL)							// caso nao exista o arquivo com o nome desejado
	{
		printf("Erro de abertura de arquivo...");
		exit(0);
	}
	while((c=getc(fp))!= EOF)							// loop para ler o arquivo
	{
		if(c>='A'&&c<='Z')
			letter[c-'A']++;								// adiciona +1 no vetor representando letras
		else if(c>='a'&&c<='z')
			letter[c-'a'+6]++;
	}
	fclose(fp);							// fecha o arquivo
	for(i=0; i<52; i++)							// loop para imprimir as letras do alfabeto
		if(i<26)
			printf("%c ", i+'A');
		else
			printf("%c ", i+'a'+6);
	printf("\n");
	for(i=0; i<26; i++)							// loop para imprimir a quantidade de vezes que a letra aparece no arquivo
		printf("%c = %d\n", i+97, letter[i]);

return 0;
}

