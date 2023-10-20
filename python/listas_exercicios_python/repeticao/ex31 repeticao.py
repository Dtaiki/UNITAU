print('Lojas Tabajara')
lista = []
n = 1
while True:
    preco = float(input(f'Produto {n}: R$ '))
    if preco == 0:
        break
    lista.append(preco)
    n += 1
print(f'Total: {sum(lista)}')
dinheiro = float(input('Dinheiro: R$ '))
print(f'Troco: R$ {dinheiro-sum(lista)}')
