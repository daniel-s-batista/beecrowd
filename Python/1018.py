valor = int(input())
qntd = 0
print(valor)
while valor >= 100:
    qntd += 1
    valor -= 100
print(qntd, "nota(s) de R$ 100,00")
qntd = 0
while valor >= 50:
    qntd += 1
    valor -= 50
print(qntd, "nota(s) de R$ 50,00")
qntd = 0
while valor >= 20:
    qntd += 1
    valor -= 20
print(qntd, "nota(s) de R$ 20,00")
qntd = 0
while valor >= 10:
    qntd += 1
    valor -= 10
print(qntd, "nota(s) de R$ 10,00")
qntd = 0
while valor >= 5:
    qntd += 1
    valor -= 5
print(qntd, "nota(s) de R$ 5,00")
qntd = 0
while valor >= 2:
    qntd += 1
    valor -= 2
print(qntd, "nota(s) de R$ 2,00")
qntd = 0
while valor >= 1:
    qntd += 1
    valor -= 1
print(qntd, "nota(s) de R$ 1,00")