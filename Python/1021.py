valor = float(input())
qntd = 0
print("NOTAS:")
while valor >= 100:
    qntd += 1
    valor -= 100
print(qntd, "nota(s) de R$ 100.00")
qntd = 0
while valor >= 50:
    qntd += 1
    valor -= 50
print(qntd, "nota(s) de R$ 50.00")
qntd = 0
while valor >= 20:
    qntd += 1
    valor -= 20
print(qntd, "nota(s) de R$ 20.00")
qntd = 0
while valor >= 10:
    qntd += 1
    valor -= 10
print(qntd, "nota(s) de R$ 10.00")
qntd = 0
while valor >= 5:
    qntd += 1
    valor -= 5
print(qntd, "nota(s) de R$ 5.00")
qntd = 0
while valor >= 2:
    qntd += 1
    valor -= 2
print(qntd, "nota(s) de R$ 2.00")
qntd = 0
print("MOEDAS:")
while valor >= 1:
    qntd += 1
    valor -= 1
print(qntd, "moeda(s) de R$ 1.00")
qntd = 0
while valor >= 0.5:
    qntd += 1
    valor -= 0.5
print(qntd, "moeda(s) de R$ 0.50")
qntd = 0
while valor >= 0.25:
    qntd += 1
    valor -= 0.25
print(qntd, "moeda(s) de R$ 0.25")
qntd = 0
while valor >= 0.1:
    qntd += 1
    valor -= 0.1
print(qntd, "moeda(s) de R$ 0.10")
qntd = 0
while valor >= 0.05:
    qntd += 1
    valor -= 0.05
print(qntd, "moeda(s) de R$ 0.05")
qntd = round(valor * 100)
print(qntd, "moeda(s) de R$ 0.01")