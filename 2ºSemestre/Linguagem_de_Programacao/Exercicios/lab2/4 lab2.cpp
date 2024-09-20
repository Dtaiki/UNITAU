#include<stdio.h>
#include<stdlib.h>
#define MAXVAL 6							/* maximo tamanho do stack */

void create(double val[MAXVAL]);
double push(double f, double *pval, int sp);
double peek(int sp, double *pval);
double pop(int sp, double *pval);
void print_stack(int l, double *pval);
void clear(double *pval);

int main()
{
	int l, posicao=0, resp, *pval;							/* ponteiro para o topo (últ. pos. cheia) */
	double val[MAXVAL], valor;							/* stack de valores */
	
	do{							// loop para opcoes do menu
		printf("1 - criar stack\n2 - adicionar no stack\n3 - ver topo\n");
		printf("4 - ver e retirar do topo\n5 - imprimir stack\n6 - limpar stack\n");
		scanf("%d", &resp);							// entrada da resposta do menu
		printf("\n");
		switch (resp)
		{
			case 1:
				{
					create(val);							// chama a funcao de criacao
					continue;
				}
			case 2:
				{
					printf("digite o novo valor: ");
					scanf("%lf", &valor);							// entrada do novo valor do stack
					push(valor, val, posicao);							// chama a funcao para inserir o valor no stack
					posicao++;							// adiciona +1 no contador do stack
					continue;
				}
			case 3:
				{
					peek(posicao, val);							// chama a funcao para ver o ultimo valor posto no stack
					continue;
				}
			case 4:
				{
					pop(posicao, val);							// chama a funcao para ver e deletar o ultimo valor do stack
					posicao--;							// retira 1 do contador do stack
					continue;
				}
			case 5:
				{
					print_stack(posicao, val);							// chama a funcao para imprimir o stack
					continue;
				}
			case 6:
				{
					clear(val);							// chama a funcao que limpa o stack
					continue;
				}
		}
	}while(resp!=0);
	printf("fim\n");
return 0;
}


void create(double *pval)							/* clear stack */
{
	int l;
	for(l=0; l<MAXVAL; l++)							// percorre o vetor usando um ponteiro e define os valores como 0
	{
		*(pval+l)= 0;
	}
}

double push(double f, double *pval, int sp)							/* push valor f no stack */
{
    if (sp < MAXVAL)							/* testa se stack permite inserção  */
	{
		pval[sp] = f;							// insere o valor esejado
    }
	else 
	{
		printf ("erro: stack cheio\n");
    }
	printf("\n");

return 0;
}

double peek(int sp, double *pval)							 /* examina valor no topo */ /* sem retirá-lo do stack */
{
	printf("%.3lf\n", *(pval+sp-1));							// imprime o valor do topo do stack
	printf("\n");

return 0;
}

double pop(int sp, double *pval)							/* pop valor do topo do stack */
{
	if(sp>=0)
	{
		printf("%.3lf\n", *(pval+sp-1));							// imprime o valor do topo do stack
		*(pval+sp)= 0;							// define como 0 o ultimo valor do stack
    }
	else
	{
		printf("erro: stack vazio\n");
    }
	printf("\n");

return 0;
}

void print_stack(int sp, double *pval)
{
	int l;
	
	for(l=sp-1; l>=0; l--)							// percorre e imprime o stack do topo para a base
	   printf("posicao: %d   valor: %.3lf\n", l+1, *(pval+l));
	printf("\n");
}

void clear(double *pval)							/* clear stack */
{
	int l;
	for(l=0; l<MAXVAL; l++)							// percorre o stack e define o valor como 0
	{
		*(pval+l)= 0;
	}
}

