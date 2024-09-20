#include<stdio.h>
#include<stdlib.h>

// prototipo da funcao
void swapv (int a[], int b[], int n);

int main()
{
// atribuicao de variaveis
	int c, resultado, v[3], w[3];

// estrutura para adicao de valores nas strings
	for(c=0; c<3; c++)
	{
		printf("Digite o valor da %d posicao do vetor 1: ", c+1);
		scanf("%d", &v[c]);
	}
	for(c=0; c<3; c++)
	{
		printf("Digite o valor da %d posicao do vetor 2: ", c+1);
		scanf("%d", &w[c]);
	}
// chamada da funcao
	swapv (v, w, 3);
	
return 0;
}

// funcao para a troca dos valores dos vetores
void swapv (int a[], int b[], int n)
 { int i, temp;
 for (i=0; i<n; i++) {
 temp = a[i];
 a[i] = b[i];
 b[i] = temp;
 }
 // impressao dos vetores apos a troca
 for(i=0; i<3; i++)
	{
		printf("valor do vetor a em %d = %d\n", i, a[i]);
	}
	printf("\n");
 for(i=0; i<3; i++)
	{
		printf("valor do vetor b em %d = %d\n", i, b[i]);
	}
	printf("\n");
 }

