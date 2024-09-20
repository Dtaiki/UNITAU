#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int gotoxy( const WORD x, const WORD y )
{
	COORD xy;
	xy.X = x;
	xy.Y = y;
	return SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), xy );
}

int main()
{
	int a, b, c=1, d=1;
	
	printf("Digite um numero entre 0 e 33 para receber seu fatorial.\n");
	scanf("%d", &a);
	
	for(b=2; b<=a; b++)
	{
		c= c*b;
		d++;
		if(c<0)
		{
			c= -c;
			gotoxy(1,d);
			{
				printf("Numero %d", b);
			}
			gotoxy(12, d);
			{
				printf("Fatorial %d",c);
			}
		}
		else
		{
			gotoxy(1,d);
			{
				printf("Numero %d", b);
			}
			gotoxy(12, d);
			{
				printf("Fatorial %d",c);
			}
		}
	}
	printf("\n %d foi o numero fatorado e %d foi o resultado da fatoracao.\n", a, c);
system("pause");
return 0;
}

//16! foi o maximo sem erro em inteiro e 33 foi o maximo retornando um valor
