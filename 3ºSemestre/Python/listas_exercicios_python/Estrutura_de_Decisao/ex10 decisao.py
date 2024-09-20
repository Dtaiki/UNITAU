#   pede ao usuario inserir uma letra
x = input('Digite o turno(M, V, N):\n')
#   compara a letra digitada com outras letras e decido oque imprimir
if x.upper() == 'M':
    print('Bom Dia!')
elif x.upper() == 'V':
    print('Boa Tarde!')
elif x.upper() == 'N':
    print('Boa Noite!')
else:
    print('Valor Inválido!')
