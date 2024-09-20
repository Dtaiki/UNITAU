#include<stdio.h>							// atribuicao de bibliotecas
#include<stdlib.h>
#define N 32

int main()
{
	int nentrada, nresultado, nbit=0, l;
	
	printf("digite um numero: ");
	scanf("%d", &nentrada);							// recebe um numero em decimal
	printf("\n");
	printf("%d em bits\n", nentrada);
	for(l=N-1; l>=0; l--)							// loop para imprimir o numero em binario, usando calculo binario
	{
		nresultado = nentrada >> l;						// desloca os bits para a direita
		if(nresultado&1)							
		{
			printf("1");
			nbit++;							// adiciona 1 em nbit caso o bit for igual a 1
		}
		else
			printf("0");
	}
	printf("\n\n");
	printf("o numero de 1 dentro do numero %d em binario = %d", nentrada, nbit);
	printf("\n");

return 0;
}
