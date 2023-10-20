votos = [0, 0, 0, 0, 0, 0]
print('1 - jose\n2 - joao\n3 - jeferson\n4 - Joaquim\n5 - Voto Nulo\n6 - Voto em Branco')
while True:
    voto = int(input('insira o numero do candidato: '))
    if 0 < voto < 7:
        votos[voto-1] += 1
    elif voto == 0:
        break
    else:
        continue
print(f'\njose = {votos[0]}, joao = {votos[1]}, jeferson = {votos[2]}, Joaquim = {votos[3]}')
print(f'Voto Nulo = {votos[4]}')
print(f'Voto em Branco = {votos[5]}')
print(f'Percentagem de votos nulos sobre o total de votos = {(100*votos[4])/sum(votos):.0f}%')
print(f'Percentagem de votos em branco sobre o total de votos = {(100*votos[5])/sum(votos):.0f}%')
