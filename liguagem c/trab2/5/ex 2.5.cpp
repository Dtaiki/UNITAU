#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int inteiro(int n1);

int main()
{
// atribuicao das variaveis
	int num, valor;
	
// pede ao usuario um numero
	printf("Digite um numero\n");
	scanf("%d", &num);
// chamada da funcao
	valor = inteiro(num);
// estrutura de decisao para descobrir se é primo ou nao
	if(valor==1)
	{
		printf("Numero e primo");
	}
	else
	{
		printf("Numero nao e primo");
	}

return 0;
}

// funcao
int inteiro(int n)
{
	int n1;
	
	if(n==2)
	{
		return 1;
	}
// loop para descobrir o resultado do numero se primo ou nao
	for(n1=2; n1<=n/2; n1++)
	{
		if(n%n1==0)
		{
			return 0;
		}
	}

return 1;
}
