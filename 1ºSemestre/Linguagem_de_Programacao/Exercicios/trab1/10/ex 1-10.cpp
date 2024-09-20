#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a, b, c;
	double e, f, g;
	
	// pede para que seja digitado os 3 numeros da equaçao
	printf("digite 3 numeros inteiros para a solucao da equacao do 2 grau, comecando do primeiro numero 'a'\n");
	scanf("%d", &a);
	printf("agora o segundo numero 'b'\n");
	scanf("%d", &b);
	printf("agora o ultimo numero 'c'\n");
	scanf("%d", &c);
	
	// formula do delta
	e= (b*b)-(4*a*c);
	
	// separa as formulas caso delta=0 ou delta>0
	if(e>=0)
	{
		// caso delta seja igual a 0
		if(e==0)
		{
			// primeiro resultado
			f= (-b+sqrt(e))/2*a;
			//segundo resultado
			g= (-b-sqrt(e))/2*a;
			// impressao dos resultados
			printf("\nAs duas raizes tem o mesmo valor sendo x1 = %.2f e x2 = %.2f.\n\n", f, g);
		}
		// caso delta seja maior que 0
		else
		{
			f= (-b+sqrt(e))/2*a;
			g= (-b-sqrt(e))/2*a;
			printf("\nAs raizes tem o valor de x1 = %.2f e x2 = %.2f.\n\n", f, g);
		}
	}
	// caso delta seja menor que 0
	else
	{
		printf("\nA equacao nao possui raiz.\n\n");
	}
	
system("pause");
return 0;
}
