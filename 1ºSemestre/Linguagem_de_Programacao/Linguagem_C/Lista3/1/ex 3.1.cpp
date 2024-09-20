#include<stdio.h>
#include<stdlib.h>
#define TAM 2

// prototipo da funcao
double produto_escalar(double a[], double b[], int n);

int main()
{
// atribuicao de variaveis
	double a[TAM], b[TAM];
	int result;
	
// pede ao usuario a valor dos vetores
	printf("\nDigite o valor do vetor 1\n");
	scanf("%lf %lf", &a[0], &a[1]);
	
	printf("\nDigite o valor do vetor 2\n");
	scanf("%lf %lf", &b[0], &b[1]);
	
// chama, retorna e imprime o valor do escalar
	printf("\n%lf", produto_escalar(a, b, result));

return 0;
}

//funcao para a soma do escalar
double produto_escalar(double x[], double y[], int r)
{
	double c[TAM];
	
	c[0] = x[0]*y[0];
	c[1] = x[1]*y[1];	
	r = c[0] + c[1];

return(r);
}
