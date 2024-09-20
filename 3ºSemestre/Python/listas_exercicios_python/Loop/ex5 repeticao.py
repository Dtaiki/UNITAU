popa = int(input('Digite o valor da populacao "A": '))
taxaa = float(input('Digite a taxa de crescimento de "A"(4 = 4%): '))
popb = int(input('Digite o valor da populacao "B": '))
taxab = float(input('Digite a taxa de crescimento de "B"(4 = 4%): '))
if taxaa < taxab:
    print('A populacao "A" nunca vai alcancar a populacao "B"')
cont = 0
while popa < popb:
    popa = popa*(taxaa/100)
    popb = popb*(taxab/100)
    cont = cont+1
print(f'Sao necessarios {cont} anos para A passar ou se igualar a B')
