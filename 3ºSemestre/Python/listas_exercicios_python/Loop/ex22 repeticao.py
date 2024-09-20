x = int(input('Digite um numero para saber se e primo ou nao: '))
divisores = []
if x <= 3:
    print('Primo')
    exit()
else:
    primo = True
    for n in range(2, (x//2)+1):
        if x % n == 0:
            divisores.append(n)
            primo = False
if primo:
    print('E primo')
else:
    print(f'O numero nao e primo pois e divisivel por = ', end='')
    for n in divisores:
        print(n, end=' ')
