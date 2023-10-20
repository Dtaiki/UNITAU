def nome():
    while True:
        name = input('Digite um nome: ')
        if len(name) > 3:
            return name


def idade():
    while True:
        age = int(input('Digite a idade: '))
        if 0 < age < 150:
            return age


def salario():
    while True:
        salary = float(input('digite o salario: '))
        if salary > 0:
            return salary


def genero():
    while True:
        gen = input('Digite o genero("f" ou "m"): ')
        if gen.upper() == 'F' or gen.upper() == 'M':
            return gen


def civil():
    while True:
        civ = input('Digite o estado civil("s", "c", "v" ou "d"): ')
        if civ.upper() == 'S' or civ.upper() == 'C' or civ.upper() == 'V' or civ.upper() == 'D':
            return civ


info = [nome(), idade(), salario(), genero(), civil()]
for n in info:
    print(n, end=' / ')
