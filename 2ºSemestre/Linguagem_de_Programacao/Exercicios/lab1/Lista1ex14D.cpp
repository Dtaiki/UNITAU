#include <stdio.h>
#include <stdlib.h>

double exp_inv(double x,int N){						/*Função protótipo que ira executar o inverso da exponencial*/
	double termo,Ntermo,soma;						/*Declaração das variaveis*/
	int i;
	soma=1;
	termo=1;
	for(i=1;i<=N;i++){								/*execução da função de repetição para alcançar o calculo da somatória que representa a função exponencial natural*/
		Ntermo=termo*(x/i);
		soma=soma+Ntermo;
		termo=Ntermo;
	}
	soma=1/soma;									/*inversão da exponencial, de moodo que e^-x = 1/ e^x */
	return soma;									/*retorno para a função principal*/
}

int main(void){										/*Função principal*/										
	double x,T;										/*Declaração das variaveis*/										
	int N;																					
	printf("insira o valor de x:");		
	scanf("%lf",&x);								/*Insersão de valor de x, x=5*/
	printf("insira o numero de termos:");
	scanf("%d",&N);									/*Insersão da quantidade de termos, recomendado N=21*/
	T = exp_inv(x,N);								/*Variavel T recebendo o resultado da Função protótipo*/
	printf("sendo x= %.2lf; 1/e^x = %lf",x,T);		/*Impressão de resultados*/
	
	return 0;										/*Fim do programa*/
}
