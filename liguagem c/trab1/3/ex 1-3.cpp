#include<stdio.h>
#include<stdlib.h>

int main()
{
	// varaiveis
	int a=-123; 
	char c='A'; 
	double d=3.1415926535898; 

	
	printf("Em decimal.\n%d\n%d\n%d\n\n", a, c, d);
	printf("Em hexadecimal.\n%x\n%x\n%x\n\n", a, c, d);
	printf("Em unsigned.\n%u\n%u\n%u\n\n", a, c, d);
	printf("Em character.\n%c\n%c\n%c\n\n", a, c, d);
	printf("Em float.\n%f\n%f\n%f\n\n", a, c, d);
	printf("Em double float.\n%lf\n%lf\n%lf\n\n", a, c, d);
	
system("pause");
return 0;
}
