qntd, saldo = map(int, input().split())
menor_saldo = 0
for i in range(qntd):
    saldo += int(input())
    if (i == 0 or saldo < menor_saldo):
        menor_saldo = saldo
print(menor_saldo)
