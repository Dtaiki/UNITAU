#   pede ao usuario inserir uma data e separa os valores por / usando .split()
dia, mes, ano = input('digite uma data (ex: 01/08/1999): ').split('/')
#   verifica se a data existe usando or
if dia < '01' or dia > '31' or mes < '01' or mes > '12':
    print('data invalida')
else:
    print('data valida')
