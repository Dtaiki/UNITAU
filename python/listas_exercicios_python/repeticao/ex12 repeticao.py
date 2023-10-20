x = int(input('Digite um numero para ver sua tabuada: '))
print(f'Tabuada de {x}:')
for n in range(1, 11):
    print(f'{x} X {n} = {x * n}')
