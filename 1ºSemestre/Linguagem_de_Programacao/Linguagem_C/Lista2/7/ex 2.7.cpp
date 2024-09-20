#include<stdio.h>
#include<stdlib.h>

void mover(int, char, char, char);

int main()
{
// atribuicao de valores nas variaveis do void mover(int, char, char, char)
	mover(3,'0', 't', 'd');
system("pause");
return 0;
}

// funcao com atribuiçao de variaveis
void mover(int n, char Orig, char Temp, char Dest)
{
// decide que tipo de movimento qual disco ira fazer, depois imprime o movimento que fez
	if(n==1)
	{
		printf("Mova o disco 1 da haste %c para a haste %c\n", Orig, Dest);
	}
	else
	{
		mover(n-1, Orig, Dest, Temp);
		printf("Mova o disco %d da haste %c para a haste %c\n", n, Orig, Dest);
		mover(n-1, Temp, Orig, Dest);
	}
}

