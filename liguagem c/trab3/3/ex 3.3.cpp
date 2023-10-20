#include <stdio.h>
#include <stdio.h>

int main(void)
{
// Declaracao das variaveis
	float nota[10], maior, menor, media;
	int i, x, y, aux;
// Funcao for para leitura de notas
	for (i=0; i<10; i++)
	{
		printf("Digite sua nota %d: ", i+1);
		scanf("%f", &nota[i]);
	}
// Funcao for para achar a menor nota
	for(x=0; x<10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
    		if (nota[x] > nota[y])
			{
			    aux = nota[x];
				nota[x] = nota[y];
				nota[y] = aux;
			}
 	   }
	}
	menor=nota[0];
// Impressao da menor nota
	printf("\nA menor nota e: %f", menor); 

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			if (nota[x] < nota[y])
			{
       	 		aux = nota[x];
				nota[x] = nota[y];
				nota[y] = aux;
			}
		}
	}
maior=nota[0];
// Impressao da maior nota
printf("\nA maior nota e: %f", maior); 

return 0;
}
