# cria uma lista vazia
res = []
# pede uma serie de informacoes e insere no final da lista
x = input('Responda as perguntas com "sim" e "nao"\nTelefonou para a vitima? ')
res.append(x)
x = input('Esteve no local do crime? ')
res.append(x)
x = input('Mora perto da vítima? ')
res.append(x)
x = input('Devia para a vítima? ')
res.append(x)
x = input('Já trabalhou com a vítima? ')
res.append(x)
# cria uma variavel com o valor da quantidade de 'sim' da lista anterior
part = res.count('sim')
# decide oque sera imprimido com base no valor da variavel criada anteriormente
if part < 2:
    print('Inocente')
elif part < 3:
    print('Suspeito')
elif part < 5:
    print('Cumplice')
else:
    print('Culpado')
