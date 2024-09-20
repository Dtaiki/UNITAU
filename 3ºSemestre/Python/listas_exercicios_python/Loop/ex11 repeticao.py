numeros = [int(input('Digite um numero: ')) for n in range(0, 2)]
num = [*range(min(numeros)+1, max(numeros))]
print(sum(num))
