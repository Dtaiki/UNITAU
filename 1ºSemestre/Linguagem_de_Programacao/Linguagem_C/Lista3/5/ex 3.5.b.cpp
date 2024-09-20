#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
// atribuicao das variaveis e valores da matriz
	int linhax[4], g, h, i;
	int M1[4][4]={
	{ 1, 2, 3, 4 }, 
	{ 5, 6, 7, 8 }, 
	{ 0, 0, 0, 0 }, 
	{-1, -2, -3,-4 }
	};
	
// estrutura para a soma da diagonal principal da matriz
	for(h=0; h<=3; h++)
	{
		for(g=0; g<=3; g++)
		{
			if(h==g)
				i= i+M1[h][g];
		}
	}
// impressao da soma
	printf("A soma dos elementos da diagonal principal e = %d\n", i);

system("pause");
return 0;
}


