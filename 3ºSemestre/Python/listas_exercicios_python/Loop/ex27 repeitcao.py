qnt = int(input('Digite a quantidade de salas: '))
salas = []
for n in range(qnt):
    while True:
        alunos = int(input(f'Digite a quantidade de alunos da sala {n+1}: '))
        if 0 <= alunos <= 40:
            salas.append(alunos)
            break
        else:
            print('Essa quantidade e insuficiente ou ultrapassa o valor maximo de alunos.')
            continue

media = sum(salas)/qnt
print(f'Media de alunos por sala = {media:.0f}')
