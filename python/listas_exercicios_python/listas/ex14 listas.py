# cria lista vazia
res = []
# pede dados e adiciona no final da lista
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
# cria uma variavel com a quantidade de sim da lista
part = res.count('sim')
# decide se e inocente, suspeito, cumplice ou culpado com base na quantidade de sim
if part < 2:
    print('Inocente')
elif part < 3:
    print('Suspeito')
elif part < 5:
    print('Cumplice')
else:
    print('Culpado')
