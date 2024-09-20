# pede para ser inserido um valor em float
li = float(input('Digite a quantidade de litros: '))
# pede para inserir o tipo de combistivel, A ou G
tipo = input('Digite "A" para alcool ou "G" para gasolina: ')
# caso a gasolina seja do tipo G calcula o valor e imprime
if tipo == 'G' or tipo == 'g':
    val = li*2.5
    # decide se o desconto sera aplicao ou nao com base na quantidade de L comprado
    if li <= 20:
        val = val*0.96
    else:
        val = val*94
    print(f'Valor total = {val}')
# caso a gasolina seja do tipo A calcula o valor e imprime
elif tipo == 'A' or tipo == 'a':
    val = li * 1.9
    # decide se o desconto sera aplicao ou nao com base na quantidade de L comprado
    if li <= 20:
        val = val * 0.97
    else:
        val = val * 95
    print(f'Valor total = {val}')
# imprime erro caso o valor seja invalido
else:
    print('erro')
