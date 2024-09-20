#include<stdio.h>							// adiciona bibliotecas
#include<stdlib.h>
#define N 20							// define variavel global N 

void criaHead();							// prototipos das funcoes
void addInfo();
void addInicio();
void addFinal();
void addOrdem();
void imprime();
void imprimeUm();
void busca(int decisao);
void deleta();
void armazena();
void recupera();

struct info{							// sruct dos dados dos alunos
	int num, inicial;
	char sobrenome[N];
	struct info *prox;							// ponteiro para o proximo elemento da fila
	int sexo: 4, sc: 8, emprego: 4;							// campos de bits na struct
}info;
struct info *head, *antes, *atual, *novo;							// adiciona ponteiros para a fila encadeada

int main()
{	
	int resp1, resp2;							// adiciona variaveis
	
	criaHead();							// chama funcao para criar o primeiro elemento da fila
	do{
		printf("1 - adicionar\n2 - deletar\n3 - busca\n");							// impressao do menu
		printf("4 - imprime\n5 - armazena\n6 - recupera\n");
		printf("0 - sair\n");
		scanf("%d", &resp1);							// entrada da resposta do menu
		fflush(stdin);							// limpa a entrada dos dados
		printf("\n");
		switch(resp1)							// estrutura de desvio para a  opcao escolhida
		{
			case 1:							// secao para escolher como sera adicionado
				{
					do{							// loop para a escolha da forma de adicao de dados
						printf("1 - adicionar no inicio\n2 - adicionar no final\n3 - adicionar em ordem\n0 - voltar\n");
						scanf("%d", &resp2);
						fflush(stdin);
						printf("\n");
						switch(resp2)
						{
							case 1:							// desvio para adicionar no inicio
								{
									addInfo();							// chama funcao para adicionar os dados
									addInicio();							// chama funcao para alocar o novo elemento para o inicio
									continue;							// ignora o resto da estrutura dentro do do while e continua o loop
								}
							case 2:							// desvio para adicionar no final
								{
									addInfo();							// chama funcao para adicionar os dados
									if(atual==NULL)							// estrutura de desvio caso o primeiro elemento da fila na exista(seja nulo)
									{
										addInicio();							// chama funcao para alocar o struct novo no inicio
									}
									else
									{
										addFinal();							// caso ja exista elementos na lista, aloca o novo elemento para o final
									}
									continue;
								}
							case 3:							// desvio para adicionar de forma ordenada conforme o sobrenome 
								{
									addInfo();							// chama funcao para adicionar os dados
									if(atual==NULL)							// estrutura de desvio caso o primeiro elemento da fila na exista(seja nulo)
									{
										addInicio();							// chama funcao para alocar o struct novo no inicio
									}
									else
									{
										addOrdem();							// caso ja exista elementos na lista, aloca o novo elemento para o local desejado(em ordem conforme o sobrenome)
									}
									continue;
								}
						}
					}while(resp2!=0);							// caso a reseposta seja 0, volta para o menu principal
					continue;
				}
			case 2:
				{
					busca(resp1);							// chama funcao para a busca por sobrenome dentro da fila (para ser deletado)
					continue;
				}
			case 3:
				{
					busca(resp1);							// chama funcao para a busca por sobrenome dentro da fila (para ser impresso na tela)
					continue;
				}
			case 4:
				{
					imprime();							// chama funcao para a impressao da fila na tela
					continue;
				}
			case 5:
				{
					armazena();							// chama funcao para armazenar os dados em formato de texto das filas em um arquivo experno
					continue;
				}
			case 6:
				{
					recupera();							// chama funcao para imprimir os dados armazenados na tela
					continue;
				}
		}
	}while(resp1!=0);							// caso a resposta seja 0, termina o programa
	printf("fim\n");

return 0;
}


void criaHead()							// funcao para criar os primeiros elementos da fila
{
	head= (struct info*)NULL;							// define o inicio da fila(head) como nulL
	atual= (struct info*)NULL;							// define o atual elemento da fila como nulL
}

void addInfo()							// funcao para adicionar dados do struct em um novo elemento(novo)
{
	int l=0, resp, tel, civil, empr, sexo;							// adiciona variaveis
	char sobrenome[N];
	
	novo= (struct info*)malloc(sizeof(struct info));							// calcula o tamanho da struct(info) e aloca um espaco da memoria para o struct, e difine o elemento novo
	if(novo)							// caso nao de erro na alocacao de memoria do novo
	{
		printf("digite o sobrenome: ");							// entrada do sobrenome em struct
		scanf("%s", &sobrenome);
		fflush(stdin);
		while(sobrenome[l]!='\0')							// passa a string sobrenome inserido para a string do struct
		{
			novo->sobrenome[l]= sobrenome[l];
			l++;
			if(sobrenome[l]=='\0')							// termino do string sobrenome da struct
				novo->sobrenome[l]= '\0';
		}
		printf("digite a inicial: ");
		scanf("%c", &novo->inicial);							// entrada do caractere direto na struct
		fflush(stdin);
		printf("digite o numero: ");
		do{							// estrutura de repeticao para definir um numero de 4 casas numericas
			scanf("%d", &tel);
			fflush(stdin);
			if(tel>9999)							// caso o numero tenha mais que 4 casas numericas repete o loop
				printf("digite um numero de apenas 4 digitos\n");
			else if(tel<999)							// caso o numero tenha menos que 4 casas numericas repete o loop 
				printf("digite um numero de 4 digitos\n");
			else
				break;							// caso o numero tenha 4 casas numericas sai do loop
		}while(tel);
		novo->num=tel;							// define o numero dentro da struct
		printf("1-homem / 2-mulher : ");
		do{							// estrutura de repeticao para inserir 1 ou 2
			scanf("%d", &sexo);
			fflush(stdin);
			if(sexo==1||sexo==2)
				break;							// caso o numero sejaja 1 ou 2 sai do loop
			else
				printf("digite 1 ou 2\n");
		}while(sexo!=1||sexo!=2);
		info.sexo= sexo;							// transforma a resposta do sexo em bit
		novo->sexo= info.sexo;							// define o bit sexo dentro do campo de bit na struct
		printf("1-solteiro / 2-casado : ");
		do{							// estrutura de repeticao para inserir um numero entre 1 a 5
			scanf("%d", &civil);
			fflush(stdin);
			if(civil==1||civil==2||civil==3||civil==4||civil==5)
				break;
			else
				printf("digite 1 ou 2\n");
		}while(civil!=1||civil!=2||civil!=3||civil!=4||civil!=5);
		info.sc= civil;							// transforma a resposta em bit
		novo->sc= info.sc;							// define o bit sc dentro do campo de bit na struct
		printf("1-empregado / 2-desempregado : ");
		do{							// estrutura de repeticao para inserir 1 ou 2
			scanf("%d", &empr);
			fflush(stdin);
			if(empr==1||empr==2)
				break;
			else
				printf("digite 1 ou 2\n");
		}while(empr!=1||empr!=2);
		info.emprego= empr;							// transforma a resposta em bit
		novo->emprego= info.emprego;							// define o bit emprego dentro do campo de bit na struct
	}
	else
		printf("erro de alocacao\n");							// caso houver erro de alocacao de memoria imprime erro na tela
		printf("\n");
}

void addInicio()							// funcao para inserir o elemento novo no incio da fila
{
	atual= novo;							// transforma atual em novo 
	atual->prox= head;							// transforma o ponteiro para o proximo elemento da lista do atual em head
	head= atual;							// transforma o novo atual em head(inicio da fila)
}

void addFinal()							// funcao para inserir o elemento novo no final da fila
{
	atual= head;							// atual vira o primeiro elemento da fila
	while(atual->prox)							// enquanto noa chegar no ultimo elemento da fila, atual percorre a fila
	{
		antes= atual;
		atual= atual->prox;
	}	
	atual->prox= novo;							// define o proximo elemento com o ponteiro do novo
	atual= novo;							// transforma o elemento novo no novo elemento atual
	atual->prox= (struct info*)NULL;							// define o ponteiro para o proximo elemento como nulo
}

void addOrdem()							// funcao para inserir o elemento novo de acordo com o sobrenome
{
	int l;							// adiciona variaveis
	
	atual= head;							// transforma o elemento atual no primeiro elemento da lista
	do{							// estrutura de repeticao para percorrer a lista
		for(l=0; novo->sobrenome[l]!='\0'; l++)							// estrutura de repeticao para percorrer o sobrenome no elemento atual
		{
			if(novo->sobrenome[l]==atual->sobrenome[l])							// caso os caracteres forem iguais, ignora o resto da estrutura e continua o loop
				continue;
			else if(novo->sobrenome[l]<atual->sobrenome[l]&&atual->prox==NULL)							// caso exista apenas um elemento na fila e o sobrenome for antes, adiciona o elemento novo no inicio da llista
			{
				addInicio();							// chamada da funcao para adicionar novo no inicio da lista 
				return;							// retorna para main
			}
			else if(novo->sobrenome[l]>atual->sobrenome[l]&&atual->prox==NULL)							// caso exista apenas um elemento na fila e o sobrenome for depois, adiciona o elemento novo no final da lista
			{
				addFinal();							// chamada da funcao para adicionar novo no final da lista
				return;
			}
			else if(novo->sobrenome[l]<atual->sobrenome[l])							// caso caractere do sobrenome seja menor que o caractere do sobrenome do elemento atual adiciona entre o elemento anterior e o atual
			{
				novo->prox= atual;							// define o proximo elemento do elemento novo para o ponteiro do elemento atual
				antes->prox= novo;							// transforma o proximo elemento do elemento anterior para o ponteiro do elemento novo
				atual= novo;							// transforma o elemento novo no novo elemento atual
				return;
			}
		}
		antes= atual;							// transforma o alemento anterior no elemento atual
		atual= atual->prox;							// transforma o elemento atual no proximo elemento apontado na fila
	}while(atual->prox);
	if(novo->sobrenome[l]<atual->sobrenome[l]&&atual->prox==NULL)							// caso o sobrenome esteja no final da fila e seja menor
	{
		novo->prox= atual;							// define o proximo elemento do elemento novo para o ponteiro do elemento atual
		antes->prox= novo;							// transforma o proximo elemento do elemento anterior para o ponteiro do elemento novo
		atual= novo;
		return;
	}
	if(novo->sobrenome[l]>atual->sobrenome[l]&&atual->prox==NULL)							// caso o sobrenome esteja no final da fila e seja maior
	{
		addFinal();							// chama a funcao para adicionar o elemento novo no final
		return;
	}
}

void imprime()							// funcao para imprimir os dados da fila
{
	int l;
	
	atual= head;							// transforma o elemento atual no primeiro elemento da fila 
	printf("impressao\n");
	printf("NOME				INICIAL		NUMERO		SEXO		SITUACAO	EMPREGO\n");
	while(atual->prox)							// loop para percorrer a fila
	{
		for(l=0; atual->sobrenome[l]!='\0'; l++)							// loop para imprimir os caracteres do sobrenome
			printf("%c", atual->sobrenome[l]);
		while(l<N)							// loop para preencher 20 caracteres no nome
		{
			printf(" ");
			l++;
		}
		printf("		%c", atual->inicial);							// imprime a inicial do elemento atual
		printf("		%d", atual->num);							// imprime o numero do elemento atual
		if(atual->sexo==1)							// imprime o sexo do elemento atual usando campos de bit
			printf("		homem");
		else
			printf("		mulher");
		if(atual->sc==1)							// imprime a situacao civil do elemento atual usando campos de bit
			printf("		solteiro");
		else if(atual->sc==2)
			printf("		casado");
		else if(atual->sc==3)
			printf("		separado");
		else if(atual->sc==4)
			printf("		divorciado");
		else
			printf("		viuvo");
		if(atual->emprego==1)							// imprime o estado de emprego do elemento atual usando campos de bit
			printf("	empregado");
		else
			printf("		desempregado");
		printf("\n");
		atual= atual->prox;
	}
	for(l=0; atual->sobrenome[l]!='\0'; l++)							// loop para imprimir os caracteres do sobrenome do ultimo elemento da fila
		printf("%c", atual->sobrenome[l]);
	while(l!=N)							// loop para preencher 20 caracteres no nome
	{
		printf(" ");
		l++;
	}
	printf("		%c", atual->inicial);							// imprime a inicial do ultimo elemento da fila
	printf("		%d", atual->num);							// imprime o numero do ultimo elemento da fila
	if(info.sexo==1)							// imprime o sexo do ultimo elemento da fila usando campos de bit
		printf("		homem");
	else
		printf("		mulher");
	if(atual->sc==1)							// imprime a situacao civil do ultimo elemento da fila usando campos de bit
		printf("		solteiro");
	else if(atual->sc==2)
		printf("		casado");
	else if(atual->sc==3)
		printf("		separado");
	else if(atual->sc==4)
		printf("		divorciado");
	else
		printf("		viuvo");
	if(atual->emprego==1)							// imprime o estado de emprego do ultimo elemento da fila usando campos de bit
		printf("	empregado");
	else
		printf("		desempregado");
	printf("\n\n");
}

void imprimeUm()							// funcao para imprimir um elemento da fila
{
	int l;
	
	printf("impressao\n");
	printf("NOME				INICIAL		NUMERO		SEXO		SITUACAO	EMPREGO\n");
	for(l=0; atual->sobrenome[l]!='\0'; l++)							// loop para imprimir os caracteres do sobrenome
			printf("%c", atual->sobrenome[l]);
	while(l!=N)							// loop para preencher 20 caracteres no nome
	{			
		printf(" ");
		l++;
	}
	printf("		%c", atual->inicial);							// imprime a inicial do elemento atual
	printf("		%d", atual->num);							// imprime o numero do elemento atual
	if(atual->sexo==1)							// imprime o sexo do elemento atual usando campos de bit
			printf("		homem");
	else
		printf("		mulher");
	if(atual->sc==1)							// imprime a situacao civil do elemento atual usando campos de bit
		printf("		solteiro");
	else if(atual->sc==2)
			printf("		casado");
	else if(atual->sc==3)
		printf("		separado");
	else if(atual->sc==4)
		printf("		divorciado");
	else
		printf("		viuvo");
	if(atual->emprego==1)							// imprime o estado de emprego do elemento atual usando campos de bit
		printf("	empregado");
	else
		printf("		desempregado");
	printf("\n");
}

void busca(int decisao)							// funcao para buscar um elemento da fila pelo sobrenome (recebe um valor para deletar ou imprimir os dados)
{
	int l=0, tamsobr=0, tamsobratual;
	char sobr[N];
	
	if(decisao==2)
		printf("deletar sobrenome: ");
	else
		printf("sobrenome desejado: ");
	scanf("%s", &sobr);							// entrada do sobrenome
	fflush(stdin);
	atual=head;							// transforma o elemento atual no primeiro elemento da fila
	while(sobr[tamsobr]!='\0')							// calcula o tamanho do sobrenome
		tamsobr++;
	do{							// loop para percorrer a fila
		tamsobratual=0; 
		l= 0;
		while(sobr[l]==atual->sobrenome[l])							// verifica se os caracteres do elemento da lista e os caracteres do sobrenome sao iguais e soma a quantidade
		{
			tamsobratual++;
			l++;
		}
		if(tamsobr==tamsobratual-1)							// caso forem iguais(com -1 na tamsobraatual pois '\0' e somado) o dado e deletado ou impresso 
		{
			if(decisao==2)
				deleta();							// chamada da funcao para deletar
			else
				imprimeUm();							// chamada para funcao de impressao unica
		}
		if(atual->prox==NULL)							// sai do loop caso esteja no ultimo elemento da fila
			break;
		antes= atual;							// transforma o elemento anterior no elemento atual
		atual= atual->prox;							// transforma o elemento atual no proximo elemento da fila
	}while(atual->prox!=NULL);
	if(atual->prox==NULL)							// caso esteja no ultimo elemento da fila
	{
		tamsobratual=0;
		while(sobr[tamsobratual]==atual->sobrenome[tamsobratual])							// verifica se os caracteres do elemento da lista e os caracteres do sobrenome sao iguais e soma a quantidade
			tamsobratual++;
		if(tamsobr==tamsobratual-1)							// caso forem iguais(com -1 na tamsobraatual pois '\0' e somado) o dado e deletado ou impresso 
		{
			if(decisao==2)
				deleta();							// chamada da funcao para deletar
			else
				imprimeUm();							// chamada para funcao de impressao unica
		}
		printf("\n");
		return;
	}
	
return;
}

void deleta()
{
	if(atual==head)							// caso o primeiro elemento da fila for deletado
	{
		head= atual->prox;							// trasforma o proximo elemento da fila em primeiro elemento da fila
		free(atual);							// libera o espaco do struct do elemento atual 
		atual= head;							// transforma o elemento atual no primeiro elemento da fila
	}
	else
	{
		antes->prox= atual->prox;							// transforma o proximo elemento do elemento anterior no pointeiro do proximo elemento do elemento atual
		free(atual);							// libera o espaco do struct do elemento atual
		atual= antes;							// transforma o elemento atual no elemento anterior
	}
		
return;
}

void armazena()							// funcao para armazenar os dados da fila
{
	FILE *arquivos;							// adiciona ponteiro para arquivo
	int l;
	
	atual= head;							// transforma o elemento atual no primeiro elemento da fila
	printf("impressao em arquivo: ");
	arquivos= fopen("DadosAlunos.txt", "w");							// abre ou cria um arquivo de texto
	fprintf(arquivos, "NOME				INICIAL		NUMERO		SEXO		SITUACAO	EMPREGO\n");							// imprime no arquivo
	while(atual->prox)
	{
		for(l=0; atual->sobrenome[l]!='\0'; l++)							// imprime no arquivo os caracateres do sobrenome
			fprintf(arquivos, "%c", atual->sobrenome[l]);
		while(l<N)							// preenche os 20 caracteres do sobrenome
		{
			fprintf(arquivos, " ");
			l++;
		}
		fprintf(arquivos, "		%c", atual->inicial);							// imprime no arquivo a inicial
		fprintf(arquivos, "		%d", atual->num);							// imprime no arquivo o numero
		if(atual->sexo==1)							// imprime no arquivo o sexo usando campos de bit
			fprintf(arquivos, "		homem");
		else
			fprintf(arquivos, "		mulher");
		if(atual->sc==1)							// imprime no arquivo o estado civil usando campos de bit
			fprintf(arquivos, "		solteiro");
		else if(atual->sc==2)
			fprintf(arquivos, "		casado");
		else if(atual->sc==3)
			fprintf(arquivos, "		separado");
		else if(atual->sc==4)
			fprintf(arquivos, "		divorciado");
		else
			fprintf(arquivos, "		viuvo");
		if(atual->emprego==1)							// imprime no arquivo se esta empregado usando campos de bit
			fprintf(arquivos, "	empregado");
		else
			fprintf(arquivos, "		desempregado");
		fprintf(arquivos, "\n");
		atual= atual->prox;
	}
	for(l=0; atual->sobrenome[l]!='\0'; l++)							// imprime no arquivo os caracateres do sobrenome do ultimo elemento da fila
		fprintf(arquivos, "%c", atual->sobrenome[l]);
	while(l<N)							// preenche os 20 caracteres do sobrenome
	{
		fprintf(arquivos, " ");
		l++;
	}
	fprintf(arquivos, "		%c", atual->inicial);							// imprime no arquivo a inicial
	fprintf(arquivos, "		%d", atual->num);							// imprime no arquivo o numero do ultimo elemento da fila
	if(info.sexo==1)							// imprime no arquivo o sexo usando campos de bit do ultimo elemento da fila
		fprintf(arquivos, "		homem");
	else
		fprintf(arquivos, "		mulher");
	if(atual->sc==1)							// imprime no arquivo o estado civil usando campos de bit do ultimo elemento da fila
		fprintf(arquivos, "		solteiro");
	else if(atual->sc==2)
		fprintf(arquivos, "		casado");
	else if(atual->sc==3)
		fprintf(arquivos, "		separado");
	else if(atual->sc==4)
		fprintf(arquivos, "		divorciado");
	else
		fprintf(arquivos, "		viuvo");
	if(atual->emprego==1)							// imprime no arquivo se esta empregado usando campos de bit do ultimo elemento da fila
		fprintf(arquivos, "	empregado");
	else
		fprintf(arquivos, "		desempregado");
	fprintf(arquivos, "\n\n");
	fclose(arquivos);							// fecha o arquivo
	printf("concluido \n\n");
}

void recupera()							// funcao para imprimir um arquivo na tela
{
	FILE *arquivos;							// adiciona um ponteiro pora arquivo
	char le;
	
	arquivos= fopen("DadosAlunos.txt","r");							// abre o arquivo
	printf("\nImpressao dos arquivos\n");
	do							// loop para impressao dos caracteres do arquivo
	{
		le= fgetc(arquivos);							// transforma a variavel para um caractere do arquivo
		printf("%c" , le);							// imprime a variavel com caractere
	}while (le!=EOF);							// percorre o arquivo enquanto nao chegar no final do arquivo
	fclose(arquivos);							// fecha o arquivo
}

