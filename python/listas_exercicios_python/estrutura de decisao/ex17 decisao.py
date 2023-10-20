#   pede ao usuario inserir uma ano
ano = int(input('Digiite um ano: '))
#   verifica se o ano e bissexto retirando o resto da divisao entre o ano e 4, caso nao tenha resto o ano e bissexto
if ano % 4 == 0:
    print('Ano bissexto')
else:
    print('Ano nao bissexto')
