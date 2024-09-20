#   pede ao usuario inserir um numero
x = int(input('digite o dia da semana: '))
#   estrutura de decisao para decidir qual o dia da semana imprimir, caso o dia nao exista sera impresso valor invalido
if x == 1:
    print('Domingo')
elif x == 2:
    print('Segunda')
elif x == 3:
    print('Terca')
elif x == 4:
    print('Quarta')
elif x == 5:
    print('Quinta')
elif x == 6:
    print('Sexta')
elif x == 7:
    print('Sabado')
else:
    print('Valor invalido')
