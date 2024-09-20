#include <stdio.h>
#include <stdlib.h>

float exp_inv(float x,int N){                       /*Fun��o prot�tipo que ira executar o inverso da exponencial*/
	float termo,soma,Ntermo;						/*Declara��o das variaveis*/
	int i;						
	termo=1;
	soma=1;
	for(i=1;i<=N;i++){								/*execu��o da fun��o de repeti��o para alcan�ar o calculo da somat�ria que representa a fun��o exponencial natural*/
		Ntermo=termo*(x/i);
		soma=soma+Ntermo;
		termo=Ntermo;
	}	
	soma=1/soma;									/*invers�o da exponencial, de moodo que e^-x = 1/ e^x */
	return soma;									/*retorno para a fun��o principal*/
}

int main(void){										/*Fun��o principal*/										
	float x,T;										/*Declara��o das variaveis*/										
	int N;																					
	printf("insira o valor de x:");		
	scanf("%f",&x);									/*Insers�o de valor de x, x=5*/
	printf("insira o numero de termos:");
	scanf("%d",&N);									/*Insers�o da quantidade de termos, recomendado N=21*/
	T = exp_inv(x,N);								/*Variavel T recebendo o resultado da Fun��o prot�tipo*/
	printf("sendo x= %.2f; 1/e^x = %f",x,T);		/*Impress�o de resultados*/
	
	return 0;										/*Fim do programa*/
}
