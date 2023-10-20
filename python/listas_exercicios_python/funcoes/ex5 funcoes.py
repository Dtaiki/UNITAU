# funcao para calcular o imposto aplicado e imprimir na tela o resultado
def somaImposto(taxaImposto, custo):
    print(custo+custo*taxaImposto/100)


# pede para inserir o valor
val = float(input('Digire o valor: '))
# pede para inserir a taxa
taxa = float(input('Digire da taxa: '))
# chama a funcao, entregando as variaveis val e taxa
somaImposto(val, taxa)
