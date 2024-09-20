#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3
#define M 3

// Prototipo da funcao soma
void soma_matrizes(double a[][M], double b[][M], double c[][M], int n, int m);

int main(void)
{
// atribuicao das variaveis
	double m1[N][M], m2[N][M], m3[N][M], resultado[N][M];
	int linha, coluna, n=N, m=M;
	
// Escrevendo as matrizes
 	for (linha=0; linha<n; linha++) 
	{
		for (coluna=0; coluna<m; coluna++)
		{
			printf("matriz 1[%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &m1[linha][coluna]);
    	}
		printf("\n");
	}
	for(linha=0; linha<n; linha++)
	{
		for (coluna=0; coluna<m; coluna++)
		{
			printf("matriz 2[%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &m2[linha][coluna]);
		}
		printf("\n");
	}
	for(linha=0; linha<n; linha++)
	{
		for (coluna=0; coluna<m; coluna++)
		{
			printf("matriz 3[%d][%d]: ", linha+1, coluna+1);
			scanf("%d", &m3[linha][coluna]);
		}
		printf("\n");
	}
// Imprimindo as matrizes
	printf("Matriz 1\n");
	for(linha=0; linha<n; linha++)
	{
		for (coluna=0; coluna<m; coluna++)
		{
			printf("%3d", m1[linha][coluna]);
		}
		printf("\n");
	}
	printf("Matriz 2\n");
	for (linha=0; linha<n; linha++)
	{
		for (coluna=0; coluna<m; coluna++)
		{
		printf("%3d", m2[linha][coluna]);
		}
		printf("\n");
	}
	printf("Matriz 3\n");
	for(linha=0; linha<n; linha++)
	{
		for (coluna=0; coluna<m; coluna++)
		{
			printf("%3d", m3[linha][coluna]);
		}
		printf("\n");
	}
// funcao para a soma
	soma_matrizes(m1, m2, m3, N, M); // Chamada da funcao soma

return 0;
}

void soma_matrizes(double a[][M], double b[][M], double c[][M], int n, int m)
{
	int result[N][M];

	result[0][0] = a[0][0] + b[0][0] + c[0][0];
	result[0][1] = a[0][1] + b[0][1] + c[0][1];
	result[0][2] = a[0][2] + b[0][2] + c[0][2];
	result[1][0] = a[1][0] + b[1][0] + c[1][0];
	result[1][1] = a[1][1] + b[1][1] + c[1][1];
	result[1][2] = a[1][2] + b[1][2] + c[1][2];
	result[2][0] = a[2][0] + b[2][0] + c[2][0];
	result[2][1] = a[2][1] + b[2][1] + c[2][1];
	result[2][2] = a[2][2] + b[2][2] + c[2][2];
// impressao da soma da matriz
	printf("\nRESULTADO: [%d][%d][%d]\n           [%d][%d][%d]\n           [%d][%d][%d]\n", result[0][0], result[0][1], result[0][2], result[1][0], result[1][1], result[1][2], result[2][0], result[2][1], result[2][2]);
}
