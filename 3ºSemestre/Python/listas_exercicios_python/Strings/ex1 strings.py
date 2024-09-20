s1 = 'palavra1'
s2 = 'palavra2'
print('Compara duas strings')
print(f'String 1: {s1}')
print(f'String 2: {s2}')
print(f'Tamanho de "{s1}": {len(s1)} caracteres')
print(f'Tamanho de "{s2}": {len(s2)} caracteres')
if len(s1) == len(s2):
    print('As duas strings são de tamanhos iguais.')
else:
    print('As duas strings são de tamanhos diferentes.')
if s1 == s2:
    print('As duas strings possuem conteúdo iguais.')
else:
    print('As duas strings possuem conteúdo deferentes.')
