cardapio = {
    100: ('Cachorro Quente', 1.20, 10),
    101: ('Bauru Simples', 1.30, 0),
    102: ('Bauru com ovo', 1.50, 0),
    103: ('Hambúrguer', 1.20, 10),
    104: ('Cheeseburguer', 1.30, 0),
    105: ('Refrigerante', 1.00, 0),
}

print('100: Cachorro Quente\n101: Bauru Simples\n102: Bauru com ovo\n103: Hambúrguer\n104: Cheeseburguer\n'
      '105: Refrigerante\n0 para sair')
while True:
    pedido = int(input('codigo do pedido: '))
    if pedido == 0:
        break
    qnt = int(input('quantidade: '))
    if qnt < 0:
        continue
    cardapio[pedido] = (cardapio[pedido][0], cardapio[pedido][1], qnt)

total = 0
for codigo in cardapio:
    total += cardapio[codigo][1] * cardapio[codigo][2]
print(f'Total a pagar = {total:.2f}')
