#   pede ao usuario inserir um numero 2 vezes
n1 = int(input('Digite uma nota: '))
n2 = int(input('Digiten outra nota: '))
#   calcula a media das 2 notas
media = (n1+n2)/2
#   estrutura de decisao para decidir qual sera o valor da media
if media < 4:
    conc = 'E'
elif media < 6:
    conc = 'D'
elif media < 7.5:
    conc = 'C'
elif media < 9:
    conc = 'B'
else:
    conc = 'A'
#   estrutura de decisao para imprimir dados e informar se o aluno passou ou nao
if media < 6:
    print(f'Notas = {n1}, {n2}\nMedia = {media}\nConceito = {conc}\nReprovado')
else:
    print(f'Notas = {n1}, {n2}\nMedia = {media}\nConceito = {conc}\nAprovao')


