#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void teste_explique2(void);				// Protótipo da funcao

int main()
{
	teste_explique2();										// chamada da funcao
}

void teste_explique2(void)
{
	char letter, *p;											// declaracao das variaveis
	p= &letter;													// insere o endereco de memoria de letter em p
	letter= 'a';												// define lerret sendo = 'a'
	printf("letter= %c, *p= %c\n", letter, *p);					// imprime letter('a") e ponteiro de p(com endereco de letter='a')
	printf("&letter= %p, p=%p, &p= %p\n", &letter, p, &p);		// imprime o endereco de letter, p(numero de endereco de letter) e o numero endereco de p	
}
