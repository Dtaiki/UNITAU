# funcao para decidir se o numero e positivo ou negativo, imprimindo P ou N
def dec(x):
    if x > 0:
        print('P')
    else:
        print('N')


# pede para inserir um valor numerico em inteiro
x = int(input('Digite: '))
# chama a funcao
dec(x)
