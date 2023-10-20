# cria 2 listas
idades = []
alturas = []
# loop para adicionar dados no final das listas
for n in range(5):
    idades.append(int(input(f'Digite a idade da pessoa {n+1}: ')))
    alturas.append(float(input(f'Digite a altura da pessoa {n + 1}: ')))
# calcula a media das listas
media = sum(alturas)/len(alturas)
cont = 0
# loop para decidir se a pessoa tem mais que 13 anos e esta acima da media, caso sim adiciona +1 no contador
for n in idades:
    if n > 13:
        if alturas[idades.index(n)] > media:
            cont += 1
print(f'Alunos acima de 13 anos com a altura abaixo da media = {cont}')
