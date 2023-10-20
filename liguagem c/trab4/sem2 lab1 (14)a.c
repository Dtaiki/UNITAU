#include <stdio.h>
#include <stdlib.h>

float exp_dir(float x, int N){				/*Função protótipo que executará a exponêncial natural  */
	float termo, Ntermo, soma;				/*Declaração das variaveis float*/
	int i;									/*Declaração da varialvel int*/
	termo = 1;								/*Definindo termo=1*/
	soma = 1;								/*Definindo soma=1*/
	for(i=1;i<=N;i++){						/*Estrutura de repetição necessária para o calculo dos termos.*/
		Ntermo=-termo*x/i;					/*Atribuição de valor para a variavel float Ntermo*/
		soma=soma+Ntermo;					/*Execução do calculo de soma para cada loop*/
		termo=Ntermo;						/*Substituição do valor de termo pelo autal valor de Ntermo de modo a armazenar o progresso do calculo*/
	}
	return soma;							/*Retorno do resultado do calculo*/
}

int main(int argc, char *argv[]) {			/*Estrutura primária*/
	float x=5,T;							/*declaração das variaveis float*/
	int N=21;								/*declaração da variavel int*/
	T = exp_dir(x,N);						/*variavel T que receberá o valor retornado por return soma;*/
	printf("%.2f",T);						/*impressão do valor*/
	return 0;								/*Fim do programa*/
}
