#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, c, b, d, e, f, g;
	
	a= 1>2;
	b= 'a'>'b';    
	c= 2==0;
	d= '1'=='1';
	e= 3>=2;
	f= 'a'!= 'a';
	g= a=0;
	
	// confere se a expressao é verdadeira ou falsa
	if(1>2)
	{
		//resultado se verdadeiro
		printf("1>2 == %d entao verdadeiro\n", a);
	}
	else
	{
		// resultado se falso
		printf("1>2 == %d entao falso\n", a);
	}
	if('a'>'b')
	{
		printf("'a'>'b' == %d entao verdadeiro\n", b);
	}
	else
	{
		printf("'a'>'b' == %d entao falso\n", b);
	}
	if(2==0)
	{
		printf("2==0 == %d entao verdadeiro\n", c);
	}
	else
	{
		printf("2==0 == %d entao falso\n", c);
	}
	if('1'=='1')
	{
		printf("'1'=='1' == %d entao verdadeiro\n", d);
	}
	else
	{
		printf("'1'=='1' == %d entao falso\n", d);
	}
	if(3>=2)
	{
		printf("3>=2 == %d entao verdadeiro\n", e);
	}
	else
	{
		printf("3>=2 == %d entao falso\n", e);
	}
	if('a'!= 'a')
	{
		printf("'1!= '1 == %d entao verdadeiro\n", f);
	}
	else
	{
		printf("'1'!= '1' == %d entao falso\n", f);
	}
	if(a=0)
	{
		printf("a=0 == %d entao verdadeiro\n", g);
	}
	else
	{
		printf("a=0 == %d entao falso\n", g);
	}
	
system("pause");
return 0;
}
