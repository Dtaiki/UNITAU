n = int(input('Digite um numero: '))
x = 1
x1 = 0
print(x)
for i in range(n):
    res = x+x1
    x1 = x
    x = res
    print(res)
