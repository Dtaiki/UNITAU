x = int(input('Fatorial de: '))
res = 1
print(f'{x}! = ', end='')
while x > 0:
    if x == 1:
        n = x - 1
        print(f'{x} = ', end='')
        res = res * x
        break
    n = x-1
    print(f'{x} . ', end='')
    res = res * x
    x = x-1
print(res)
