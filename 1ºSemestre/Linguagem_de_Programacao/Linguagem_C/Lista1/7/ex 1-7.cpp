#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char a, b;
	
	// pede para digitar um caractere
	printf("digite uma letra\n");
	// recebe um caracere e escaneia
	a= getchar();
	// imprime o caractere escaneado, explica como o getchar funciona e pede para digitar um novo caractere
	printf("Perceba que o caractere %c foi lido apos apertar enter, agora digite outra letra.\n", a);
	// recebe um caracere e escaneia
	b= getch();
	// imprime o caractere escaneado e explica como o getch funciona
	printf("\nPerceba que o caractere %c nao apareceu na tela e foi lido sem a necessidade do enter.\n", b);
	
system("pause");
return 0;
}

