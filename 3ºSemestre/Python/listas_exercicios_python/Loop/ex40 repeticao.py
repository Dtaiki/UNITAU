dic = {}
for n in range(5):
    codigo = int(input('Digite o codigo da cidade'))
    carros = int(input('Insira a quantidade de carros: '))
    acidentes = int(input('Insira a quantidade de acidentes: '))
    dic.update({codigo: (carros, acidentes)})
menor_indice = [0, 0]
media_veic = sum(dic[codigo][0] for codigo in dic)/len(dic)
media_acidentes = 0
cidades_media = 0
for nome, dados in dic.items():
    if dados[1] < menor_indice[1]:
        menor_indice = [nome, dados[1]]
    if dados[0] < 2000:
        media_acidentes += dados[1]
        cidades_media += 1
print(f'A cidade com menos acidentes e {menor_indice[0]} com {menor_indice[1]}')
print(f'A media de carros das cidades e {media_veic}')
print(f'A media acidentes em cidades com menos de 2000 carros = {media_acidentes/cidades_media}')
