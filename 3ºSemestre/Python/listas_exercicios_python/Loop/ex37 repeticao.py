lista = {}
while True:
    nome = input('Digite o nome: ')
    if nome == '0':
        break
    codigo = int(input('Digite o codigo: '))
    idade = int(input('Digite a idade: '))
    altura = float(input('Digite a altura: '))
    peso = float(input('Digite o peso: '))
    lista.update({nome: (codigo, idade, altura, peso)})
alto = max(lista, key=lambda nome: lista[nome][2])
baixo = min(lista, key=lambda nome: lista[nome][2])
gordo = max(lista, key=lambda nome: lista[nome][3])
magro = min(lista, key=lambda nome: lista[nome][3])
media_altura = sum(lista[nome][2] for nome in lista)/len(lista)
media_peso = sum(lista[nome][3] for nome in lista)/len(lista)

print(f'Informacoes da pessoa mais alta:\nNome: {alto}, Codigo: {lista[alto][0]}, idade: {lista[alto][1]}, altura: '
      f'{lista[alto][2]} e peso: {lista[alto][3]}')
print(f'Informacoes da pessoa mais baixa:\nNome: {baixo}, Codigo: {lista[baixo][0]}, idade: {lista[baixo][1]}, altura: '
      f'{lista[baixo][2]} e peso: {lista[baixo][3]}')
print(f'Informacoes da pessoa mais pesada:\nNome: {gordo}, Codigo: {lista[baixo][0]}, idade: {lista[baixo][1]}, '
      f'altura: {lista[baixo][2]} e peso: {lista[baixo][3]}')
print(f'Informacoes da pessoa mais magra:\nNome: {magro}, Codigo: {lista[magro][0]}, idade: {lista[magro][1]}, altura: '
      f'{lista[magro][2]} e peso: {lista[magro][3]}')
print(f'A media de altura = {media_altura}')
print(f'A media de peso = {media_peso:.2f}')
