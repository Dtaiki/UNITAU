#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// prototipo do calculo da raiz
double calcula_raiz (double num);

int main()
{
// atibuicao das variaveis
	int num;
	double resultado;
	
// pede ao usuario digitar um numero
	printf("Digite um numero para descobrir sua raiz.\n");
	scanf("%d", &num);

// chamada e retorno da funcao e impressao do resultado
	resultado = calcula_raiz (num);
	printf("A raize de %d = %.5lf", num, resultado);

return 0;
}

// funcao para o calculo da raiz
double calcula_raiz (double num)
{
	double ultimoChute, novoChute;	

// estrutura que repete o calculo ate a o resultado ser a raiz do numero dado
	for(ultimoChute=1; ultimoChute!=sqrt(num);)
	{
		novoChute=0.5*(ultimoChute+num/ultimoChute);
		ultimoChute= novoChute;
	}
	num= ultimoChute;

// retorna o valor de num para calcula_raiz (num)
return  num;	
}
