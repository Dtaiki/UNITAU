qtd = int(input('Digite o quantas temperaturas deseja medir: '))
lista = [float(input(f'Insira a temperatura do clima {n}: ')) for n in range(qtd)]
print(f'A maior temperatura foi {max(lista)}, a menor foi {min(lista)} e a media dos {qtd} climas e'
      f' {sum(lista)/len(lista)}')
