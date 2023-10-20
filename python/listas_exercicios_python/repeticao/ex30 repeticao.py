preco = float(input('Preço do pão: R$ '))
print('Panificadora Pão de Ontem - Tabela de preços')
for n in range(1, 51):
    print(f'{n} - RS {n*preco:.2f}')
