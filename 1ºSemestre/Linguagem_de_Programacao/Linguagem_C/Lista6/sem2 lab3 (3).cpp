#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
	int num; 
	int lg;
	
	printf("Digite um numero para saber se eh raiz exata de 2: ");
	scanf("%d", &num);
	lg= (int)log10(num)/log10(2); // Express�o para calculo da potencia exata de 2
	//condi��es para saber se eh raiz exata de 2
	if(lg % 2==0){
		printf("Eh potencia exata");
	}
	else{
		printf("Nao eh potencia exata");
	}
	printf("\n");
	
system("pause");
return 0;
}
