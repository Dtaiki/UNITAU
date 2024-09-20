#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c, d=0;
	
	// pede para o usuario 2 numeros separados
	printf("Digite um numero.\n");
	scanf("%d", &a);
	printf("Agora outro numero.\n");
	scanf("%d", &b);

	//separa qual funcao sera utilizada
	if(a<b)
	{
		// estrutura de repetiçao para adicionar +1 em c ate c=b
		for(c=a; c<=b; c++)
		{
			// verifica se c é multiplo de 3
			if(c%3==0)
			{
				// soma +c em d
				d= d+c;
			}
		}
		// imprime a soma dos multiplos de 3 apos o termino da estrutura de repetiçao
		printf("Soma dos numeros multiplos de 3 = %d.\n", d);
	}
	// caso a>b
	else
	{
		// estrutura de repetiçao para adicionar +1 em c ate c=a
		for(c=b; c<=a; c++)
		{
			if(c%3==0)
			{
				d= d+c;
			}
		}
		printf("Soma dos numeros multiplos de 3 = %d.\n", d);
	}

system("pause");
return 0;
}
