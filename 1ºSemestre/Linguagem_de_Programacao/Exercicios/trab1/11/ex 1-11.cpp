#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	char c;
	double d;
	
	// pede para o usuario digitar uma expressao
	printf("digite a soma\n");
	// escaneia a expressao digitada
	scanf("%d %c %d", &a, &c, &b);
	
	// separa a funcao caso a expressao seja soma, subtra��o, multiplica�ao, divisao ou resto
	switch (c)
	{
		// caso a expressao seja uma soma
		case '+':
		{
			d= a+b;
			// impressao do resultado caso seja uma soma
			printf("resultado da soma = %.2f\n", d);
			// saida da fun�ao switch
			break;
		}
		// caso a expressao seja uma subtra�ao
		case '-':
		{
			d= a-b;
			// impressao do resultado caso seja uma subtra�ao
			printf("resultado da soma = %.2f\n", d);
			// saida da fun�ao switch
			break;
		}
		case '*':
		{
			d= a*b;
			printf("resultado da soma = %.2f\n", d);
			break;
		}
		case '/':
		{
			d= a/b;
			printf("resultado da soma = %.2f\n", d);
			break;
		}
		case '%':
		{
			d= a%b;
			printf("resultado da soma = %.5f\n", d);
			break;
		}
	}
	
	
system("pause");
return 0;
}
