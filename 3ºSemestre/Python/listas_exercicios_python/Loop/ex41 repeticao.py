divida = float(input('Insira o valor da divida: '))
qnt_parcelas = int(input('Digite a quantidade de parcelas: '))
print('Valor da Dívida Valor dos Juros Quantidade de Parcelas Valor da Parcela')
print(f'R$ {divida}         0               1                      R$ {divida}')
if qnt_parcelas > 2:
    juros = 10
    for n in range(3, qnt_parcelas+2, 3):
        juros += 5
        print(f'R$ {divida+divida*(juros/100):,.2f}     {divida*(juros/100):.0f}             {n}                      '
              f'R$ {divida+divida*(juros/100)/n:,.2f}')
