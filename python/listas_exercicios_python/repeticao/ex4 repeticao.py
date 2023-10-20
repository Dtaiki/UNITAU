popa = 80000
popb = 200000
cont = 0
while popa < popb:
    popa = popa*1.03
    popb = popb*1.015
    cont = cont+1
print(f'Sao necessarios {cont} anos para A passar ou se igualar a B')
