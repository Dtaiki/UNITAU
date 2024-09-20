#   pede para o usuario inserir um caractere
x = input('Digite "M" ou "F": ')
#   usa a funcao upper() para formatar o caractere e imprime masculino caso o usuario tenha inserido "m", feminino
#   caso tenha inserido "f" ou sexo invalido caso nao seja nenhum dos dois
if x.upper() == 'M':
    print('Masculino')
#
elif x.upper() == 'F':
    print('Feminino')
else:
    print('Sexo invalido')
