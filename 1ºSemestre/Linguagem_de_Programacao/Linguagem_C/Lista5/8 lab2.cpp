#include<stdio.h>
#include<stdlib.h>

void pbin(unsigned int);
void pline(void);


int main(){
	char op[3]; //Aceita dois char para deslocamento
	unsigned int x1, x2;
	
	while(1){
		printf("\n\nDigite uma expressao (ex. 'FF00 & A23C'): ");
		scanf("%x %s %x", &x1, op, &x2);
		switch(op[0]){
			case '&' : pbin(x1); printf(" & (and)\n");
					   pbin(x2);
					   pline();
					   pbin(x1 & x2);
					   break;
			case '|' : pbin(x1); printf(" | (or)\n");
					   pbin(x2);
					   pline();
					   pbin(x1 | x2);
					   break;
			case '^' : pbin(x1); printf(" ^ (xor)\n");
					   pbin(x2);
					   pline();
					   pbin(x1 ^ x2);
					   break;
			case '>' : pbin(x1); printf(" >> %d\n", x2);
					   pline();
					   pbin(x1 >> x2);
					   break;
			case '<' : pbin(x1); printf(" << %d\n", x2);
					   pline();
					   pbin(x1 << x2);
					   break;
			case '~' : pbin(x1); printf(" ~ (complemento)\n");
					   pline();
					   pbin(~x1);
					   break;
			default: printf("Operador invalido.\n");
		}
	}
	
	system("pause");
	return 0;
}

//imprime numero em binario
void pbin(unsigned int num)
{
	unsigned int mask;
	int j, bit;
	mask = 0x8000;
	printf("%04X\t\t", num);
	for(j=0; j<32; j++)
	{
		bit = (mask & num) ? 1:0;
		printf("%d", bit);
		if(j==7)
		printf("--");
		mask>>=1;
	}
	printf("\n");
}

void pline(){
	printf("-----------------------");
	printf("-----------------------\n");	
}
