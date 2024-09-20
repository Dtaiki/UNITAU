#   pede ao usuario inserir o valor de A para realizar a funcao de bhaskara
a = int(input('Digite o valor de A: '))
#   caso A seja 0 o programa e encerrado usando a funcao exit()
if a == 0:
    exit()
b = int(input('Digite o valor de B: '))
c = int(input('Digite o valor de C: '))
#   calcula o valor de delta
delta = b**2-4*a*c
#   verifica se delta e menor que 0, igual a 0 ou maior, case seja menor o programa e encerrado, caso igual imprime o
#   unico resultado ou caso seja maior imprime os resultados
if delta < 0:
    exit()
elif delta == 0:
    print(-b/(2*a))
else:
    print(f'{-b + (delta / delta) / (2 * a): .2f} & {-b - (delta / delta) / (2 * a): .2f}')
