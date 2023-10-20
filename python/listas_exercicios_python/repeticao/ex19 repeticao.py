x = int(input('Quantos valores deseja inserir? '))
numeros = []
while x != 0:
    a = float(input(f'Insira um numero: '))
    if 0 < a < 1000:
        numeros.append(a)
        x = x-1
print(f'Maior num = {max(numeros)}, menor = {min(numeros)} e a soma = {sum(numeros)}')
