#   pede ao usuario inserir um numero 3 vezes criando uma lista de inteiros de tamanho 3
lados = [int(input('Digite um lado do triangulo: ')) for n in range(3)]
#   decide se e possivel fazer um triangulo com os valores informados
if sum(lados)-max(lados) > max(lados):
    print('forma um triangulo', end=' ')
    #   decide se o triangulo e equilatero, isoceles ou escaleno
    if sum(lados)/3 == lados[0]:
        print('equilatero')
    elif lados[0] == lados[1] or lados[0] == lados[2] or lados[1] == lados[2]:
        print('isosceles')
    else:
        print('escaleno')
else:
    print('nao e um triangulo')

