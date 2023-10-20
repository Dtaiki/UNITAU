# cria uma lista e pede para inserir um numero 3 vezes
lista1 = [int(input('Insira um numero: ')) for n in range(3)]
# cria uma lista com os numeros pares usando um loop e comparando o resto com 0
lista2 = [n for n in lista1 if n % 2 == 0]
# cria uma lista com os numeros impares usando um loop e comparando o resto com 0, e adicionado caso seja diferente de 0
lista3 = [n for n in lista1 if n % 2 != 0]
# imprime as 3 listas
print(f'Lista inserida: {lista1}')
print(f'Lista de pares: {lista2}')
print(f'Lista de impares: {lista3}')
