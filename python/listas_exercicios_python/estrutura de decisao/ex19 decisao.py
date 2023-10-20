#   pede ao usuario inserir um numero
n = int(input('digite um numero menor que 1000: '))
#   caso o numero nao atenda as exigencias necessarias o programa e encerrado utilizando a funcao exit()
if n >= 1000:
    exit()
#   caso o valor tenha 3 digitos realiza as equacoes e imprime apenas os 3 digitos
elif n > 99:
    print(f'{(n // 100):.0f} centenas, {n % 100 // 10:.0f} dezenas e {n % 10:.0f} unidades')
#   caso o valor tenha 2 digitos realiza as equacoes e imprime apenas os 2 digitos
elif n > 9:
    print(f'{n // 10:.0f} dezenas e {n % 10:.0f} unidades')
#   caso nao seja nenhuma das outras 3 opcoes imprime apenas a unidade
else:
    print(f'{n} unidades')
