#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
// atribuicao das varaiveis e da matriz com seus valores
	int linhax[4], g, h, i;
	int M1[4][4]={
	{ 1, 2, 3, 4 }, 
	{ 5, 6, 7, 8 }, 
	{ 0, 0, 0, 0 }, 
	{-1, -2, -3,-4 }
	};

// impressao da matiz no antes da troca
	printf("Matriz antes.\n");
	for(h=0; h<=3; h++)
	{
		for(g=0; g<=3; g++)
		{
			printf("%d ", M1[h][g]);
		}
		printf("\n");
	}
	printf("\n");
// estrutura para inversao da 1 e 2 linha da matriz
	for(h=0; h<=3; h++)
	{
		linhax[h]= M1[0][h];
		M1[0][h]= M1[1][h];
		M1[1][h]= linhax[h];
	}
// impressao da matriz apos a inversao das linhas 1 e 2
	printf("Matriz depois.\n");
	for(h=0; h<=3; h++)
	{
		for(g=0; g<=3; g++)
		{
			printf("%d ", M1[h][g]);
		}
		printf("\n");
	}
	printf("\n\n");

system("pause");
return 0;
}


