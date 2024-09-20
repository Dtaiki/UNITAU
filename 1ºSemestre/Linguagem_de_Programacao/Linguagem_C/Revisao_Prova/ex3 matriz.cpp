#include<stdio.h>
#include<stdlib.h>
#define L 4
#define C 4

int main()
{
	int matriz[L][C], l, o, cont=0;
	for(l=0; l<L; l++)
	{
		for(o=0; o<C; o++)
		{
			printf("coluna %d, linha %d: ", l+1, o+1);
			scanf("%d", &matriz[l][o]);
		}
	}
	for(l=0; l<L; l++)
	{
		for(o=0; o<C/2; o++)
		{
			if(matriz[l][o]!=matriz[l][L-1-o])
				cont++;
		}
	}
	if(cont==0)
		printf("matriz simetrica\n");
	else
		printf("matriz nao simetrica\n");

return 0;
}
