def prova():
    resposta = [input(f'{n+1:02d} - ').upper() for n in range(10)]
    return resposta


gab = ('A', 'B', 'C', 'D', 'E', 'E', 'D', 'C', 'B', 'A')
cola = int(input('1 - mostrar o gabarito\n2 - sem gabarito\n'))
if cola == 1:
    print(gab)
notas = []
x = 1
while True:
    if x == 0:
        break
    else:
        respostas = prova()
        cont = 0
        for n in range(10):
            if respostas[n] == gab[n]:
                cont += 1
        notas.append(cont)
        x = int(input('\n1 - Fazer de novo\n0 - Sair e ver as notas\n'))
print(f'Maior nota = {max(notas)} / Menor nota = {min(notas)}\nProvas feitas = {len(notas)}\nMedia das provas = '
      f'{sum(notas)/len(notas)}')
