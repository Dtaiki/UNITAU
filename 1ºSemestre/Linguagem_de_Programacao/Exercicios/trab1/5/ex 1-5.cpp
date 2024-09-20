#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=0;
	
	// comando para somar +1 em "a" ate a=127
	for (a=0; a<128; a++)
		// comando para imprimir o numero e o caractere
		printf("%d imprime valor, %c imprime desenho\n", a, a);

system("pause");
return 0;
}
