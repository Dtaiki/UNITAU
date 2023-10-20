# loop para inserir valores e imprimir dados
while True:
    # cria uma lista
    dados = []
    # lista com numeracao
    numeros = ['Primeiro', 'Segundo', 'Terceiro', 'Quarto', 'Quinto']
    # pede para inserir um nome e adiciona no final da lista
    dados.append(input('Atleta: '))
    # caso o dade seja vazio encerra o programa
    if dados[0] == '':
        exit()
    print()
    # cria uma lista que pede a nota do salto 5 vezes
    dados.append([float(input(f'{numeros[n]} Salto: '))for n in range(5)])
    # imprime os dados do atleta, a nota e a media das notas
    print('Resultado final:')
    print(f'Atleta: {dados[0]}')
    print(f'Saltos: {dados[1][0]:.1f}', end='')
    # loop para imprimir as notas
    for n in dados[1][1:]:
        print(f' - {n:.1f}', end='')
    print(f'\nMedia dos saltos: {sum(dados[1])/len(dados[1]):.1f} m')
