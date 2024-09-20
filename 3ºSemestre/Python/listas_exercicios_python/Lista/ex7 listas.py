# cria uma lista que pede um numero inteiro 5 vezes
lista = [int(input('Insira um inteiro: ')) for n in range(5)]
m = 1
# loop para multiplicar o resultado da multiplicacao
for n in lista:
    m *= n
# impressao dos resultados
print(f'A soma dos inteiros = {sum(lista)}, a multiplicacao = {m} e a lista = {lista}')
