#include <stdio.h>
#include <stdlib.h>

// prototipos
long int binaryt();
long int binary();

int main ()
{
// atribuicao das variaveis
	long int vetor[1000];
	int i,j;
	long int y,f=1000, mid;
	
// loop para adicionar valor no vetor e imprimila
	for (i=0; i<1000; i++)
	{
		vetor[i]= i+1;
		printf("%d\n", vetor[i]);
	}
	
// pede ao usuario o numero desejado
	printf("Digite o numero que gostaria de localizar\n");
	scanf("%d", &y);
// impressao do local do numero desejado e a quantidade de comparacoes feitas
	printf("\nO numero esta no espaco %d", binary(vetor, f, y));
	printf(" e foram feitas %d comparacoes\n",  binaryt(vetor, f, 1000/3));

return 0;
}

// funcao para procurar o numero desejado
long int binary(long int v[], long int n, long int x)
{
	long int low=0, high=n-1, mid;
	while (low <= high)
	{
		mid=(high+low)/2;
		if (x<v[mid]) high=mid-1;
		else if(x>v[mid]) low=mid+1;
		else return(mid);
	}

return(-1);
}

// funcao que mostra a quantidade de comparacoes feitas
long int binaryt(long int v[], long int n, long int x)
{
	long int low=0, high=n-1, mid, t=0;
	while (low <= high)
	{
		mid=(high+low)/2;
		t++;
		if (x<v[mid]) high=mid-1;
		else if(x>v[mid]) low=mid+1;
		else return(t);
	}

return(-1);
}
