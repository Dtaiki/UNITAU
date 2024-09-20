#include <stdio.h>
#include <stdlib.h>

float exp_dir(float x, int N){				/*Fun��o prot�tipo que executar� a expon�ncial natural  */
	float termo, Ntermo, soma;				/*Declara��o das variaveis float*/
	int i;									/*Declara��o da varialvel int*/
	termo = 1;								/*Definindo termo=1*/
	soma = 1;								/*Definindo soma=1*/
	for(i=1;i<=N;i++){						/*Estrutura de repeti��o necess�ria para o calculo dos termos.*/
		Ntermo=-termo*x/i;					/*Atribui��o de valor para a variavel float Ntermo*/
		soma=soma+Ntermo;					/*Execu��o do calculo de soma para cada loop*/
		termo=Ntermo;						/*Substitui��o do valor de termo pelo autal valor de Ntermo de modo a armazenar o progresso do calculo*/
	}
	return soma;							/*Retorno do resultado do calculo*/
}

int main(int argc, char *argv[]) {			/*Estrutura prim�ria*/
	float x=5,T;							/*declara��o das variaveis float*/
	int N=21;								/*declara��o da variavel int*/
	T = exp_dir(x,N);						/*variavel T que receber� o valor retornado por return soma;*/
	printf("%.2f",T);						/*impress�o do valor*/
	return 0;								/*Fim do programa*/
}
