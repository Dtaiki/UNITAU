#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
// atribuicao de variaveis
	float nota, media, cont=0, snotas=0, maior=0, menor=10;
	
	printf("digite as notas dos alunos, e para concluir digite um numero negativo\n");
// loop para adicionar nota ate a adicao de um valor negativo
	while(nota>=0)
	{
		scanf("%f", &nota);
// estrutura de decisao para saber se a nota esta entre 0 e 10
		if(nota>10)
		{
			printf("Digite um numero entra 0 e 10\n");
		}
		else if(nota<0)
		{
			break;
		}
		else
		{
			cont++;
			snotas= snotas+nota;
// estrutura para substituir a menor nota por uma nova menor nota
			if(nota>maior)
			{
				maior=nota;
			}
// estrutura para substituir a maior nota por uma nova maior nota
			if(nota<menor)
			{
				menor=nota;
			}
		}
	}
	media = snotas/cont;
// impressao das notas
	printf("A menor nota = %.2f\n", menor); 
	printf("A maior nota = %.2f\n", maior);  
	printf("Sua media = %.2f", media);
	
return 0;
}
