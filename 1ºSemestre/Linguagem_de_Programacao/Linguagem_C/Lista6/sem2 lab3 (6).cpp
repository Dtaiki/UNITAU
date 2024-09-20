#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	FILE *fp , *fp2;							// atribuicao de variaveis
	char filename[80], nome[80];
	int c, palavra=0, i, letter[26]={0};
	
	printf("Enter filename: ");
	scanf("%s", filename);
	fp= fopen(filename, "r");							// abre um arquivo		digitar letras.txt
	printf("digite o nome do novo arquivo: ");
	scanf("%s", nome);
	printf("\n");
	fp2= fopen(nome, "w");							// abre o arquivo onde vai ser copiado o primeiro arquivo
	if(fp==NULL)							// caso nao exista o arquivo com o nome desejado
	{
		printf("Erro de abertura de arquivo...");
		exit(0);
	}
	while((c=getc(fp))!= EOF)							// loop para ler o arquivo
	{
		fprintf(fp2, "%c", c);							// imprime no segundo arquivo os caracteres do primeiro 
		if(c==32)
		{
			palavra++;							// quando aparecer um espaco no arquivo adiciona +1 na variavel com numero de palavras
			continue;
		}
		letter[c-97]++;							// adiciona +1 no vetor representando letras
	}
	fclose(fp);							// fecha o arquivo
	fclose(fp2);
	for(i=0; i<26; i++)							// loop para imprimir a quantidade de vezes que a letra aparece no arquivo
		printf("%c = %d\n", i+97, letter[i]);
	printf("\n");
	printf("o numero de palavras = %d", palavra+1);							// imprime o numero de palavras
	printf("\n");

return 0;
}

