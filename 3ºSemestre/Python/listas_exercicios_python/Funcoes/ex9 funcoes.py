# funcao para retornar o numero inverso
def qnt(x):
    # transforma o numero em uma string
    xstr = str(x)
    # inverte a string em uma nova string
    xinv = xstr[::-1]
    return xinv


# pede para inserir um valor
x = int(input('Digite um numero: '))
# chama a funcao e imprime o valor retornado
print(qnt(x))
