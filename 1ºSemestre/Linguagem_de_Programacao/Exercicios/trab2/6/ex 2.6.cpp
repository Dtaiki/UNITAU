#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
// atribuicao de variaveis
	int a, b, c=0, d;
	
// pede para o usuario digitar um numero 
	printf("Digite um numero para descobrir se ele e palindromo.\n");
	scanf("%d", &a);
	
	b=a;
// estrutura de repeticao para inverter o numero dado
	while(b!=0)
	{
		c= c*10+b%10;
		b= b/10;
	}
	
// estrutura de decisao para ver se é palindromo
	if(c==a)
	{
		printf("%d e palindromo.\n", a);
	}
	else
	{
		printf("%d nao e palindromo.\n", a);
	}
	
system("pause");
return 0;
}
