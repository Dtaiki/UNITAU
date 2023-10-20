qnt = int(input('Digite a quantidade de CDs: '))
cds = [int(input(f'digite o valor do cd {n+1}: ')) for n in range(qnt)]


media = sum(cds)/qnt
print(f'Valor total investido = {sum(cds)}\nPreco medio de cada CD {media:.2f}')
