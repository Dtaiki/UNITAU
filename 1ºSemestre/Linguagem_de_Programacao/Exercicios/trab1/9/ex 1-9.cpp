#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hs;
	double vh, ss, ssh, he;
	
	// pede para o usuario as horas trabalhadas
	printf("Digite as horas semanais\n");
	// colhe o resultado digitdo
	scanf("%d", &hs);
	// pede para o usuario o salario
	printf("Agora o valor hora\n");
	// colhe o resultado digitado
	scanf("%lf", &vh);
	
	// separa a formula que vai ser usada caso o horario seja menos ou mais que 40h semanais
	if(hs < 41)
	{
		ss= hs*vh;
		// imprime o salario sem o extra, pois nao houve hora extra
		printf("\nSalario semanal sem hora extra = %.2lf\n", ss);
	}
	else
	{
		ss= (((hs-40)*(vh*1.5))+(40*vh));
		// imprime o salario com o extra
		printf("\nSalario semanal + hora extra = %.2lf\n", ss);
	}
		
	system("pause");
	return 0;
}
