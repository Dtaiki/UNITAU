#include<stdio.h>							// atribuicao de bibliotecas
#include<stdlib.h>
#define N 32

int main()
{
	int l, entrada, impressao, cont=0;
	
	printf("digite um numero sem sinal: ");
	scanf("%d", &entrada);							// entrada do numero
	
	for(l=N-1; l>=0; l--)							// loop para contar a quantidades de 1 em um numero binario
	{
		impressao = entrada >> l;							// desloca os bits para a direita
		if(impressao&1)
		{
			cont++;
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
	if(entrada==1||cont!=1)							// caso exista apenas 1 numero 1 e o numero colocado nao seja 1, imprime se o numero e potencia exata de dois
		printf("nao e potencia\n");
	else
		printf("e potencia");
	printf("\n");
	
return 0;
}
