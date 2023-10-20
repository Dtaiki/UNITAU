#include<stdio.h>
#include<stdlib.h>

int main()
{
	int nint;
	double nota;
	
	printf("Digite a nota: ");
	scanf("%lf", &nota);
	nint= (int)nota;
	switch (nint)
	{
		case 0:
		{
			printf("conceito F");
			break;
		}
		case 1:
		{
			printf("conceito F");
			break;
		}
		case 2:
		{
			printf("conceito F");
			break;
		}
		case 3:
		{
			printf("conceito F");
			break;
		}
		case 4:
		{
			printf("conceito F");
			break;
		}
		case 5:
		{
			printf("conceito F");
			break;
		}
		case 6:
		{
			printf("conceito D");
			break;
		}
		case 7:
		{
			printf("conceito C");
			break;
		}
		case 8:
		{
			printf("conceito B");
			break;
		}
		case 9:
		{
			printf("conceito A");
			break;
		}
		case 10:
		{
			printf("conceito A");
			break;
		}
	}
	
return 0;
}
