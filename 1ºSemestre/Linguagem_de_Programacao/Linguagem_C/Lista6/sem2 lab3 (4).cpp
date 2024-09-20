#include<stdio.h>							// atribuicao de bibliotecas
#include<stdlib.h>
#define N 32

int main()
{
	int l, entrada, resultado, bit, impressao, mask;
	
	printf("digite um numero sem sinal: ");
	scanf("%d", &entrada);							// entrada do numero
	printf("agora a posicao do bit desejada do bit com valor 1: ");
	scanf("%d", &bit);
	printf("\n");
	mask= 1<<bit;							// desloca o valor positivo(1) para o bit desejado
	resultado= entrada|mask;							// forca o bit desejado ser 1
	for(l=N-1; l>=0; l--)							// loop para imprimir os bits da variavel resultado
	{
		impressao = resultado >> l;							// desloca os bits para a direita
		if(impressao&1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	
return 0;
}


