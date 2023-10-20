#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

// funcao para adicao de coordenadas
int gotoxy( const WORD x, const WORD y )
{
	COORD xy;
	xy.X = x;
	xy.Y = y;
	return SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), xy );
}

// funcao principal
int main()
{
// atribuicao de variaveis 
	int a, b, c=1, d=1;
	
// pede que o usuario digite um numero
	printf("Digite um numero entre 0 e 33 para receber seu fatorial.\n");
	scanf("%d", &a);
	
// estrutura de repeticao para calcular o fatorial e imprimir uma tabela com os valores
	for(b=2; b<=a; b++)
	{
		c= c*b;
		d++;
// estrutura de decisao para deixar o resultado positivo caso esteja negativo
		if(c<0)
		{
			c= -c;
// mostra ande o valor deve ser imprimido na tabela
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
// impressao do resultado da fatoracao
	printf("\n %d foi o numero fatorado e %d foi o resultado da fatoracao.\n", a, c);
system("pause");
return 0;
}

//16! foi o maximo sem erro em inteiro e 33 foi o maximo retornando um valor
// para aumentar o NMAX deve ser trocado %d por %f ou %lf
