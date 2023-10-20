# funcao para imprimir os numeros
def repete(x):
    # loop para a linha do numero
    for n in range(x+1):
        # loop para imprimir numeros ate chegar no valor de um determinado numero de linhas
        for i in range(n):
            # usa end='' para nao pular para outra linha
            print(i+1, end='')
        print()


# pede para inserir um valor e le em inteiro
x = int(input())
# chama a funcao
repete(x)
