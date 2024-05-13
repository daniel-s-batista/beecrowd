tamanho = 100
A = []
for i in range(tamanho):
    A.append(float(input()))
for i in range(tamanho):
    if A[i] <= 10:
        print("A[", i,"] = ", A[i], sep="")
