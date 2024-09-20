# pede para inserir um valor
x = float(input('DIgite um numero: '))
# tira o resto de 1 e imprime inteiro caso o resultado seja 0, caso contrario imprime decimal
if x % 1 == 0:
    print('inteiro')
else:
    print('decimal')
