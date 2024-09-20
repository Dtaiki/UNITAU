#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

int mystrlen(char s[]);				// prototipo da funcao

int main()
{
	int l;									// declaracao das variaeveis
	char p[80];
	
	printf("Digite uma palavra: ");								// atribuicao de valores na string
	scanf("%s", p);
	printf("O tamanho da string e = %d", mystrlen(p));			// chamada e impressao do resultado da funcao

return 0;
}

int mystrlen(char s[])				// funcao para contar quantos valores existem dentro da string 
{
	int i;									// declaracao de variaveis
	for(i=0; s[i]!='\0'; i++)				// estrutura de repeticao para adiciona +1 em i enquanto o valor da variavel for diferente de '\0'	
		i++;
	
return i;				// retorno do valor do vetor para a funcao main
}
