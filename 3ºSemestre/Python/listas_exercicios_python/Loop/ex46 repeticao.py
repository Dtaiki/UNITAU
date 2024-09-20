dados = []
numeros = ['Primeiro', 'Segundo', 'Terceiro', 'Quarto', 'Quinto']
dados.append(input('Atleta: '))
print()
dados.append([float(input(f'{numeros[n]} Salto: '))for n in range(5)])
print(f'Melhor salto: {max(dados[1]):.1f} m')
print(f'Pior salto: {min(dados[1]):.1f} m')
print(f'Media dos demais saltos: {sum(dados[1])/len(dados[1]):.1f} m')
dados[1].remove(max(dados[1]))
dados[1].remove(min(dados[1]))
print('Resultado final:')
print(f'Media dos demais saltos: {sum(dados[1])/len(dados[1]):.1f} m')
