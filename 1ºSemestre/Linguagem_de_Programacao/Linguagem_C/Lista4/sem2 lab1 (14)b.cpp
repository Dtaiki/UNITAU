#include <stdio.h>
#include <stdlib.h>

/*Programa que executa o calculo do valor de e^-x; por meio de uma chamada da função float exp_dir, */
/*essa que por sua vez executa o calculo a partir das condições determinadas pelo usuário do código que decidirá os valores de x e N declarados no código principal.*/

float exp_dir(float x,int N){																/*Função que receberá os valores definidos a partir das scanfs em int main, e retornará o valor resultante.*/
	float sp,sn,termo,Ntermo,soma;															/*Declaração das variaveis que serão usadas na procedencia do código*/
	int i;																		
	sp=1;																					/*Soma positiva (SP) = 1; */
	sn=0;																					/*Soma negativa (SN) = 0;*/
	termo=1;																				/*Termo = 1;*/
	if(N==0){																				/*Primeira condição de retorno de resultado, caso o número de termos da somátoria for 0, seu retorno será 1*/
		return sp;
	}
	else{																					/*Else que permitirá a execução da função de repetição*/
	for(i=1;i<=N;i++){																		/*Função de repetição na qual a cada repetição gerará uma valor ou positivo ou negativo,*/
		Ntermo=-termo*(x/i);																/*dependendo do sinal do valor, será recebido por SP ou SN*/
		if(Ntermo<0){																		/*de modo que sejam subtraidos no final e que o resultado dessa subtração será herdada pela variavel soma*/
			sn=sn+Ntermo;																	/*ao final da função ocorrerá o retorno de soma*/
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

int main(void){																				/*Função principal*/
	float x,T;																				/*Aqui será executado a leitura dos valores definidos pelo usuário, que serão recebidos pela protótipo da função*/
	int N;																					/*T é a varoavel que receberá o valor da função protótipo e será impresso como resultado.*/
	printf("insira o valor de x:");
	scanf("%f",&x);
	printf("insira o numero de termos:");
	scanf("%d",&N);
	T = exp_dir(x,N);
	printf("sendo x= %.2f; e^-x = %.2f",x,T);
	
	return 0;
}
