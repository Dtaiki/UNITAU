numero = int(input('insira um numero: '))
s = 0
for n in range(1, numero+1):
    s += n / (n * 2 - 1)
print(s)
