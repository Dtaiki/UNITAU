# lista com nome dos meses
meses = ['janeiro', 'fevereiro', 'marco', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro',
         'novembro', 'dezembro']
# cria uma lista que pede para inserir a temperatura dos meses
climas = [float(input(f'Digite a media de temperatura de {n}')) for n in meses]
# cria uma variavel com a media de temperatura
media = sum(climas)/len(climas)
# loop para imprimir os meses com a temperatura acima da media
for n in range(len(meses)):
    if climas[n] > media:
        print(f'{meses[n]} = {climas[n]}')
