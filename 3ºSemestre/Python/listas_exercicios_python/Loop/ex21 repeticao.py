x = int(input('Digite um numero para saber se e primo ou nao: '))
if x <= 3:
    print('Primo')
    exit()
else:
    for n in range(2, (x//2)+1):
        if x % n == 0:
            print('Nao primo')
            exit()
print('E primo')
