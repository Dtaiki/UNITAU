salario = int(input('Digite o salario inicial: '))
stotal = salario*12
percentual = 0.015
salario = salario + salario * percentual
stotal = stotal+salario*12
data = 2023-1997
for n in range(data):
    percentual = percentual*2
    salario = salario + salario * percentual
    stotal = stotal + salario * 12
print(stotal)
