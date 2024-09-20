#include<stdio.h>			// adiciona bibliotecas
#include<stdlib.h>

void teste_explique1(void);				// Protótipo da funcao

int main()
{
	teste_explique1();				// chamada da funcao
}

void teste_explique1(void)
{
	char letter, character, *p, *q;				// declaracao das variaveis
	
	p= &letter;												// insere endereco de letter em p 
	letter= 'A';											// transforma letter em 'A'
	printf("letter= %c, *p= %c\n", letter, *p);				// imprime letter('A') e o ponteiro p(com endereco de letter='A')
	*p= 'B';												// muda valor do ponteiro p(endereco de letter, antes='A') para 'B'
	printf("letter= %c, *p= %c\n", letter, *p);				// imprime letter('B') e o ponteiro p(com endereco de letter='B')
	q= p;													// insere ponteiro p(com endereco de letter) em q
	p= &character;											// insere endereco de character em p
	*p= 'Z';												// muda valor do ponteiro p(com endereco de character) para 'Z' 
	printf("leter= %c, *p= %c\n", letter, *p);				// imprime letter('B') e o ponteiro p(com endereco de character='Z')
	printf("*q= %c, character= %c\n",*q, character);		// imprime ponteiro de q('B') e o ponteiro p(com endereco de character='Z')
}
