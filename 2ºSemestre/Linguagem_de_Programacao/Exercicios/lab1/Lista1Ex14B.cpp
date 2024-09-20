#include <stdio.h>
#include <stdlib.h>

/*Programa que executa o calculo do valor de e^-x; por meio de uma chamada da fun��o float exp_dir, */
/*essa que por sua vez executa o calculo a partir das condi��es determinadas pelo usu�rio do c�digo que decidir� os valores de x e N declarados no c�digo principal.*/

float exp_dir(float x,int N){																/*Fun��o que receber� os valores definidos a partir das scanfs em int main, e retornar� o valor resultante.*/
	float sp,sn,termo,Ntermo,soma;															/*Declara��o das variaveis que ser�o usadas na procedencia do c�digo*/
	int i;																		
	sp=1;																					/*Soma positiva (SP) = 1; */
	sn=0;																					/*Soma negativa (SN) = 0;*/
	termo=1;																				/*Termo = 1;*/
	if(N==0){																				/*Primeira condi��o de retorno de resultado, caso o n�mero de termos da som�toria for 0, seu retorno ser� 1*/
		return sp;
	}
	else{																					/*Else que permitir� a execu��o da fun��o de repeti��o*/
	for(i=1;i<=N;i++){																		/*Fun��o de repeti��o na qual a cada repeti��o gerar� uma valor ou positivo ou negativo,*/
		Ntermo=-termo*(x/i);																/*dependendo do sinal do valor, ser� recebido por SP ou SN*/
		if(Ntermo<0){																		/*de modo que sejam subtraidos no final e que o resultado dessa subtra��o ser� herdada pela variavel soma*/
			sn=sn+Ntermo;																	/*ao final da fun��o ocorrer� o retorno de soma*/
		}
		else{
			sp=sp+Ntermo;
		}
		printf("sp=%f\n",sp);
		printf("sn=%f\n",sn);
		soma=(sp+sn);
		printf("soma= %f\n",soma);
		termo=Ntermo;
	}
	return soma;
}
}

int main(void){																				/*Fun��o principal*/
	float x,T;																				/*Aqui ser� executado a leitura dos valores definidos pelo usu�rio, que ser�o recebidos pela prot�tipo da fun��o*/
	int N;																					/*T � a varoavel que receber� o valor da fun��o prot�tipo e ser� impresso como resultado.*/
	printf("insira o valor de x:");
	scanf("%f",&x);
	printf("insira o numero de termos:");
	scanf("%d",&N);
	T = exp_dir(x,N);
	printf("sendo x= %.2f; e^-x = %.2f",x,T);
	
	return 0;
}
