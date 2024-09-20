x = int(input('quantas idades deseja calcular? '))
lista = [int(input(f'Digite uma {x} idades: ')) for n in range(x)]
media = sum(lista)/len(lista)
if media < 26:
    print('jovem')
elif media < 60:
    print('adulta')
else:
    print('idoso')
