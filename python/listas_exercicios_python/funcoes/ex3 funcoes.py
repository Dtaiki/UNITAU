# funcao para somar os 3 numeros
def soma(x, y, z):
    return(x+y+z)


# cria uma lista que pede para inserir um numero 3 vezes
x = [int(input('Digite um numero: ')) for n in range(3)]
# chama a funcao, entrega os 3 valores da lista e imprime o resultado retornado
print(soma(x[0], x[1], x[2]))
