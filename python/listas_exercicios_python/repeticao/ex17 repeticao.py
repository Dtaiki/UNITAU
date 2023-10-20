x = int(input('Digite um numero para ver seu fatorial: '))
res = 1
for n in range(x-1):
    res = res*(x-n)
print(res)
