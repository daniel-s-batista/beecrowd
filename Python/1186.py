op = input().lower()
soma = 0.0
cont = 0
mat = [[0.0 for i in range(12)] for i in range(12)]
for i in range(12):
    for j in range(12):
        mat[i][j] = float(input())
        if i > 0 and j > 11 - i:
            soma += mat[i][j]
            cont += 1
if op == 'm':
    soma /= cont
print("{:.1f}".format(soma))
