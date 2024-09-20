# funcao para imprimir os numeros
def repete(x):
    # loop para a linha do numero
    for n in range(x+1):
        # loop para a imprimir a numero da linha repetidamente ate chegar no valor do numero da linha
        for i in range(n):
            # usa end='' para nao pular para outra linha
            print(n, end='')
        print()


# pede para inserir um valor e le em inteiro
x = int(input())
# chama a funcao
repete(x)
