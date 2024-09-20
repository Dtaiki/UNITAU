#include<stdio.h>
#include<stdlib.h>

void calloc(int tam);							// prototipos das funcoes
void malloc(int tam);

int main()
{
	int x;							// atribuicao de variaveis
	
	printf("digite o tamanho do vetor: ");							// pede para o tamanho fos vetores
	scanf("%d", &x);							// entrada do tamanho da funcao
	printf("\n");
	malloc(x);							// chamada para a funcao de malloc
	printf("\n\n");
	calloc(x);							// chamada para a funcao calloc
	printf("fim.\n");

return 0;
}


void malloc(int tam)							// funcao para criar um vetor usando malloc
{
	int l, *vet;
	
	printf("Em malloc\n");
	vet= (int *) malloc(tam*sizeof(int));							// calcula o tamanho necessario de memoria e aloca a memoria sem mexer nos valores
	for(l=0; l<tam; l++)							// imprime o valor do vetor
	{
		printf("%d ", vet[l]);
	}
	printf("\nmalloc aloca memoria e nao altera os valores das memorias.\n");
}


void calloc(int tam)							// funcao para criar um vetor usando calloc
{
	int l, *vet;
	
	printf("Em calloc\n");
	vet= (int *) calloc(tam,sizeof(int));							// calcula o tamanho necessario de memoria e aloca a memoria, e troca os valores do vetor para 0
	for(l=0; l<tam; l++)							// imprime o valor do vetor
	{
		printf("%d ", vet[l]);
	}
	printf("\ncalloc aloca memoria e altera os valores das memorias para 0.\n");
}
