#include<stdio.h>
#include<stdlib.h>

int main()
{
	int res, r1=0, r2=1, n, l;
	
	printf("digite o numero da tabela de fibonacci desejado: ");
	scanf("%d", &n);
	for(l=0; l<n; l++)
	{
		res= r1+r2;
		r1=r2;
		r2= res;
		printf("%d = %d\n", l, res);
	}

return 0;
}
