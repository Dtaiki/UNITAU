#include<stdio.h>
#include<stdlib.h>
#define N 8

int bits(int num);
int mask(int num);

int main()
{
	int numero, numero1, bit, l;
	printf("digite um numero: ");
	scanf("%d", &numero);
	numero1= bits(numero);
	printf("funcao 1\n");
	for(l=N-1; l>=0; l--)
	{
		bit= numero1>>l;
		if(bit&1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
	numero1= mask(numero);
	printf("funcao 2\n");
	for(l=N-1; l>=0; l--)
	{
		bit= numero1>>l;
		if(bit&1)
			printf("1");
		else
			printf("0");
	}

return 0;
}


int bits(int num)
{
	num= num&(!16);
	num= num|10;

return num;
}

int mask(int num)
{
	int mask=1, l;
	
	for(l=0; l<N; l++)
	{
		if(l==1)
			num= num|mask;
		if(l==3)
			num= num|mask;
		if(l==4)
			num= num&~mask;
		mask= mask<<1;
	}
	
return num;
}

