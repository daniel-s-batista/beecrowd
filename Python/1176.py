limite = 61
pos = 0
vet = [0 for i in range(limite)]
vet[0], vet[1] = 0, 1
for i in range(2, limite):
    vet[i] = vet[i - 1] + vet[i - 2]
qntd = int(input())
for i in range(qntd):
    pos = int(input())
    print("Fib({}) = {}".format(pos, vet[pos]))
