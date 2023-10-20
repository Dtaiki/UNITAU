# pede para inserir um valor e cria uma string com 2 valores
x = input('Digite dois numeros divididos por espaco: ').split()
# pede para inserir outro caractere e insere no final da string
x.append(input('digite qual operacao deseja realizar(+, -, *, /): '))
# estrutura de decisao para decidir qual tipo de calculo sera feito utilizando a 3 elemento da string como comparador
if x[2] == '+':
    res = int(x[0])+int(x[1])
elif x[2] == '-':
    res = int(x[0])-int(x[1])
elif x[2] == '*':
    res = int(x[0])*int(x[1])
elif x[2] == '/':
    res = int(x[0])/int(x[1])
else:
    print('erro')
print(res)
# imprime as informacoes da resposta do calculo anterior utilizando estrutura de deciasao para imprimir se o numero e
# par ou impar, positivo ou negativo e inteiro ou decimal
if res % 2 == 0:
    print('par')
else:
    print('impar')
if res >= 0:
    print('positivo')
else:
    print('negativo')
if res % 1 == 0:
    print('inteiro')
else:
    print('decimal')
