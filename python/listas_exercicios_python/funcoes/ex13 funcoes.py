# funcao para desenhar o quadrado
def desenha(x, y):
    # decide qual o tamanho do quadrado caso esteja fora do range limite
    if 2 > x:
        x = 2
    if x > 20:
        x = 20
    if 2 > y:
        y = 2
    if y > 20:
        y = 20
    # adiciona 2 em x e y
    x += 2
    y += 2
    # loop para rodar ate que a altura y seja alcancada
    for l in range(y):
        # loop para imprimir as colunas da linha
        for c in range(x):
            # decide o que sera impresso de acordo com a coluna que esta
            if c in [0, x-1] and l in [0, y-1]:
                print('+', end='')
            elif c in [0, x-1]:
                print('|', end='')
            elif l in [0, y-1]:
                print('-', end='')
            else:
                print(' ', end='')
        # pula para a proxima linha
        print()


# cria uma lista que pede os valores de x e y
x = [int(input('Digite um valor maior que 1 e menor que 20: ')) for n in range(2)]
# chama a funcao e entrega os valores desejados
desenha(x[0], x[1])
