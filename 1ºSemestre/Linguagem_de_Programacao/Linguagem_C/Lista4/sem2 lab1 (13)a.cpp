#include<stdio.h>
#include<stdlib.h>

int main()
{
	double nota;
	
	printf("Digite a nota: ");
	scanf("%lf", &nota);
	if(nota<6)
		printf("conceito F");
	else if(nota<7)
		printf("conceito D");
	else if(nota<8)
		printf("conceito C");
	else if(nota<9)
		printf("conceito B");
	else
		printf("conceito A");
	
return 0;
}
