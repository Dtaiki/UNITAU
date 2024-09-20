#include<stdio.h>
#include<stdlib.h>

#define N 4
#define K 4
#define M 4

void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k);

int main(){
	double a[N][K]; 
	double b[K][M];
	double c[N][M];
	
	int n,m,k;
	
	produto_matrizes(a,b,c,n,m,k); 
	
	return 0;
}

void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k){
	
	for(n=0; n < N ;n++)
			for(m=0; m < K ;m++){
				printf("digite o valor da linha[%d][%d]\n", n, m);
				scanf("%lf", &a[N][M]);}
				
		for(n=0; n < K ;n++)
			for(m=0; m < M ;m++){
				printf("b[%d][%d]\n", n, m);
				scanf("%lf", &b[N][M]);}
	
	for(n = 0; n < N ;n++)
		for(m = 0; m < K ; m++){
		c[N][M] = a[N][K] * b[K][M];
	}
	printf("O produto eh %lf", c[n][m]);
	
}
