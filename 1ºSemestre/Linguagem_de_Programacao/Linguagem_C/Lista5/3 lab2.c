#include <stdio.h>							// adiciona bibliotecas
#include <stdlib.h>

double fk(double);							// prototipos
double gx(double);
double somatotal(double (*f)(double), double m, double n);


int main()
{
	double NUM, (*f)(double);							// atribuicao de variaveis

	printf("programa para calcular a soma de (f(k))2, K entre 1 e NUM.\n");
	printf("digite um numero: ");
	scanf("%lf", &NUM);
	f=fk;							// ponteiro para funcao fk
	printf("\n");
	printf("resultado de ((1/k)^2) = %lf\n", somatotal(f, 1, NUM));							// chamada e impressao do resultado da funcao fk
	printf ("resultado de ((k)^2) = %lf\n", somatotal(gx, 1, NUM));							// chamada e impressao do resultado da funcao gx
	
system("pause");
return 0;
}

double somatotal(double (*f)(double), double m, double n) /*Função responsavel pelo resultado final*/
{
	double k, resultado=0.0;							// atribuicao de variaveis

	for(k=m; k<=n; ++k)							// loop para calcular o resultado da soma
	    resultado+= (*f)(k)*(*f)(k);

return (resultado);
}

double fk(double k)							// funcao para retornar valor de k
{
	return(1.0/k);
}

double gx(double x)							// funcao para retornar valor de x
{
	return(x);
}



