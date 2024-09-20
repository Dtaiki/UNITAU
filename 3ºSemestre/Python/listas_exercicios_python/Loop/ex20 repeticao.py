while True:
    x = int(input('Digite um numero menor que 16 para ver seu fatorial: '))
    if x < 16:
        res = 1
        for n in range(x-1):
            res = res*(x-n)
        print(res)
