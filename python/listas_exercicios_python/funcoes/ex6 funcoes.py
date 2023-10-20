# funcao para definir qual o horario e imprimir na tela
def horas(h1, h2):
    # cria uma variavel com o valor de h1 em inteiro
    h = int(h1)
    # decide e calcula o horario com base no primeiro valor, caso seja mairo que 12 subtrai 12, caso contrario imprime
    # normalmente
    if h > 12:
        h -= 12
        print(f'{h}:{h2}PM')
    else:
        print(f'{h}:{h1}AM')


# cria uma string com o horario usando .split(':') para separar horas e minutos
h = input('Digire o horario: ').split(':')
# chama a funcao e entrega os valores da string criada
horas(h[0], h[1])
