#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
// atribuicao de variaveis
	float a, b, c;
	
// pede ao usuario digitar o numero de degraus da escada
	printf("Digite o numero de degraus de uma escada que pode ser subida utilizando 1 ou 2 passos.\n");
	scanf("%f", &a);
	
// estrutura de repeticao para a conta
	for(b=a; b>=1; b--)
	{
// conta para descobrir quantas possibilidades de subir a escada usando 1 ou 2 passos de uma vez tem
		c= c+b/2;
	}
// imprime quantas maneiras de subir a escada tem
	printf("%.0f maneiras de subir a escada de forma nao recursiva.\n", c);
		
system("pause");
return 0;
}
