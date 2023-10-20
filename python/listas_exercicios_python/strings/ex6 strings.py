d, m, a = input().split('/')
meses = ['janeiro', 'fevereiro', 'março', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro',
         'novembro', 'dezembro']
print(f'Você nasceu em {d} de {meses[int(m)-1]} de {a}.')
