#include <stdlib.h>
#include <stdio.h>

int invert(int v[], int n);

int main ()
{
// atribuicao de variaveis e valores na string
	int vet[6]={1,2,3,4,5,6}, a=6, c;
	
// loop para a primeira impressao do vetor 
	printf("valor do vetor no inicio\n");
	for (c=0; c<6; c++)
	{
		printf("%d ", vet[c]);
	}

// chamada da funcao
	invert(vet, a);

return 0;
}

// funcao
int invert(int v[], int n)
{
	int temp=0, i, j=n-1;
	
// estrutura para a inversao do vetor  
	printf("\n\nvalor do vetor no final\n")	;
	for (i=0; i<n/2; i++)
	{
		temp = v[i];
		v[i] = v[j];
		v[j] = temp;
		j--;
	}
// loop para a impressao do vetor
	for (i=0; i<n; i++)
	{
		printf("%d ", v[i]);
	}
}
