# informa o valor dos produtos
print('Preco da carne abaixo e acima de 5Kg\nFile Duplo = 4,90 / 5,80\nAlcatra = 5,90 / 6,80\nPicanha = 6,90 / 7,80')
print('5% de desconto com cartao tabajara.')
# pede para inserir qual tipo de carne
tip = input('Digite o tipo da carne(File duplo, Alcatra, Picanha): ')
# pede o peso da carne
kg = float(input('Digite a quantidade em Kg: '))
# cria uma variavel = 0
tot = 0
# decide qual calculo fazrt comparando oque foi inserido no inicio com .upper() e calcula o valor da carne
if tip.upper() == 'FILE DUPLO':
    tot = tot + kg * 4.9
elif tip.upper() == 'ALCATRA':
    tot = tot + kg * 5.9
elif tip.upper() == 'PICANHA':
    tot = tot + kg * 6.9
# imprime erro caso nao exista a carne que foi inserido no inico e sai do programa
else:
    print('erro na escolha da carne')
    exit()
# aplica o desconto caso passe de 5kg de carne
if kg > 5:
    tot = tot+kg*0.9
# pede para inserir se sera pago com o cartao da loja e aplica o desconto caso sim, caso nao imprime as informacoes
# da compra
f = input('comprar com o cartao tabajara(sim ou nao)?: ')
if f.upper() == 'SIM':
    desc = tot*0.05
    totfinal = tot*0.95
else:
    desc = 0
    totfinal = tot
print(f'Informacoes da compra\nTipo da carne = {tip}\nQuantidade = {kg}\nPreco total = {tot}\ntipo de pagmento'
      f'(com ou sem cartao tabajara) = {f}\nValor do desconto = {desc:.2f}\nValor a pagar = {totfinal:.2f}')
