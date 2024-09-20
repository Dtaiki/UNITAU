#include<stdio.h>
#include<stdlib.h>

int main()
{
// atibuicao das variaveis 
	int a=0, b=0, caras=0, coroas=0;
	
// adicao da estrutura de repeticao do lancamento da moeda
	for(a=0; a<=10000; a++)
	{
// lancamento aleatorio da moeda e adicao de 1 no valor da moeda para a estrutura case nao dar erro
		b= rand() % 2;
		b= b+1;
// estrutura para imprimir os valores quando o lancamento chegar a um determindo numero de vezes jogados
		if(a==1)
		{
			printf("1x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==10)
		{
			printf("10x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==20)
		{
			printf("20x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==50)
		{
			printf("50x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==100)
		{
			printf("100x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==1000)
		{
			printf("1000x %d=caras e %d=coroas\n", caras, coroas);
		}
		else if(a==10000)
		{
			printf("10000x %d=caras e %d=coroas\n", caras, coroas);
		}
// separa se vai ser somado +1 em cara ou coroa
		switch (b)
		{
			case 1:
				caras++;
// sai da estrutura switch
				break;
			case 2:
				coroas++;
				break;
		}
	}

system("pause");
return 0;
}
