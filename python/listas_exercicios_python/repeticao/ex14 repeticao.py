num = [int(input('Insira um numero: ')) for n in range(10)]
print(f'Pares = {len([n for n in num if n % 2 == 0])}\nImpares = {len([n for n in num if n % 2 != 0])}')
