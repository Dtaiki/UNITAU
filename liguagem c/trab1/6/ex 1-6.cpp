#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int w_gotoxy( const WORD x, const WORD y )
{
	COORD xy;
	xy.X = x;
	xy.Y = y;
	return SetConsoleCursorPosition( GetStdHandle( STD_OUTPUT_HANDLE ), xy );
}

int main(void)
{
	system("cls");
	// foi adicionado as variaveis x e y
	float x, y;

	// estrutura de repetiçao para adicionar +1 em x
	for(x=2; x<80; x++)	
	{
		// y ser invertido por começar com o ultimo numero -x
		y= 81-x;
		// na casa do y o x foi trocado por y
		w_gotoxy(x, 0.25*y);
		putchar(178);
	}
	for(x=2; x<25; x++)
	{
		y= 26-x;
		w_gotoxy(x,1.0*y);
		putchar(178);
	}
	for(x=2; x<25; x++)
	{
		y= 26-x;
		w_gotoxy(x,1.5*y);
		putchar(178);
	}
	
//pede para que seja algo seja digitado, impedindo inicialmente que apareca a ultima mensagem no meio da impressao
getchar();
system("pause");
return 0;
}
