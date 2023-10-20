lista = input()
vogais = ['A', 'E', 'I', 'O', 'U']
espacos = lista.count(' ')
cont = 0
for n in lista:
    if n.upper() in vogais:
        cont += 1
print(espacos)
print(cont)
