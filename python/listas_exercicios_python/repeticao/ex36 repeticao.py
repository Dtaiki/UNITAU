numero = int(input('Montar a tabuada de: '))
inicio = int(input('Começar por: '))
final = int(input('Terminar em: '))

print(f'Vou montar a tabuada de {numero} começando em {inicio} e terminando em {final}: ')
for n in range(inicio, final+1):
	print(f'{numero} X {n} = {n*numero}')
