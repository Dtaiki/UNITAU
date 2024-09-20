# pede um valor a ser inserido
n = int(input('Digite o valor do saque: '))
# calcula quantas notas de 100 tem
centena = n // 100
# calcula o resto de 100 e calcula a quantidade de 50
cinquenta = (n % 100) // 50
# calcula o resto de 50 e calcula a quantidade de dezena
dezena = (n % 50) // 10
# calcula o resto de 10 e calcula a quantidade de 5
cinco = (n % 10) // 5
# calcula o resto de 5 e calcula a quantidade de unidades
um = (n % 5)
# analisa o valor inserido e decide se esta dentro ou fora do range
if 10 < n < 600:
    print('maximo de 600 reais e minimo de 10 reais.')
# analisa o valor inserido, caso seja maior que 99 imprime
if n > 99:
    print(f'{centena} notas de 100, {cinquenta} notas de 50, {dezena} notas de 10, {cinco} notas de 5 e'
          f' {um} notas de 1')
# analisa o valor inserido, caso seja maior que 49 imprime
elif n > 49:
    print(f'{cinquenta} notas de 50, {dezena} notas de 10, {cinco} notas de 5 e {um} notas de 1')
# imprime caso nao seja nenhuma das enteriores
else:
    print(f'{dezena} notas de 10, {cinco} notas de 5 e {um} notas de 1')
