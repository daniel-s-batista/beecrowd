total = 0
for i in range(2):
    cod, qntd, preco = map(float, input().split())
    total += qntd * preco
print("VALOR A PAGAR: R$ {:.2f}".format(total))
