tamanho = 20
N = [0 for i in range(20)]
memoria = 0
for i in range(tamanho):
    N[i] = int(input())
for i in range(tamanho // 2):
    memoria = N[i]
    N[i] = N[tamanho - i - 1]
    N[tamanho - i - 1] = memoria
for i in range(tamanho):
    print("N[{}] = {}".format(i, N[i]))
