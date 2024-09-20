#   pede para o usuario inserir um caractere
x = input('Digite uma letra: ')
#   verifica se o caractere e um vogal e imprime oque ele e
if x.upper() == 'A' or 'E' or 'I' or 'O' or 'U':
    print('Vogal')
else:
    print('Consoante')
