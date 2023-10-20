#include<stdio.h>
#include<stdlib.h>

// variavel global
int global = 20;

// variavel estatica
static int stat = 2;

int mult(int resultado)
{
	resultado = global * stat;
	return resultado;
}

int main(){
// variavel local, acessado apenas pela funcao na qual ela esta
	int n=10, a, result;
	printf("n1 = %d\n", n);
	result = mult(a);
	printf("resultado = %d", result);
	
	return 0;	
}
