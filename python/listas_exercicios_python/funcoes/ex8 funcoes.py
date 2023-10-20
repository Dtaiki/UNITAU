# funcao para contar quantos numeros tem em um valor inserido
def qnt(x):
    # cria uma variavael contador
    cont = 0
    # roda um loop enquanto o valor inserido seja maior que 1
    while x > 1:
        # adiciona 1 no contador
        cont += 1
        # divide o numero inserido por 10
        x = x/10
    # retorna o valor do contador
    return cont


# pede para inserir um numero
x = int(input('Digite um numero: '))
# chama a funcao e imprime o valor retornado
print(qnt(x))
