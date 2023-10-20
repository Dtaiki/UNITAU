# informa o valor dos produtos
print('Morango abaixo e acima de 5kg = 2,50 / 2,20\nMaca abaixo e acima de 5kg = 1,80 / 1,50\nAcima de 8kg ou 25 reais'
      'em compras 10% de desconto do valor total.')
# cria variaveis
ma = 0
mo = 0
# inicia um loop e pede para o usuario informar a quantidade de produtos a ser comprado
while True:
    f = input('Digite a fruta quer comprar entre morango ou maca: ')
    if f == 'morango':
        x = int(input('digite a quantidade em Kg: '))
        mo = mo+x
    elif f == 'maca':
        x = int(input('digite a quantidade em Kg: '))
        ma = ma+x
    else:
        print('erro na escolha da fruta')
    # pede que seja iserido um valor caso queira continuar ou parar
    es = input('Digite 1 para continuar comprando ou 0 para parar: ')
    # caso a resposta seja 0 sai do loop usando break
    if es == '0':
        break
tot = 0
# calcula a quantidade de produtos por tipo, decide se sera aplicado o desconto e imprime o valor final
if ma <= 5:
    tot = tot+ma*2.5
else:
    tot = tot+ma*2.2
if mo <= 5:
    tot = tot+mo*1.8
else:
    tot = tot+mo*1.5
if ma+mo > 8 or tot > 25:
    tot = tot*0.9
    print('desconto de 10% aplicado')
print(f'Valor a pagar = {tot}')
