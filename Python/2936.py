gramas = [300, 1500, 600, 1000, 150]
porcoes = []
total = 225
for i in range(5):
    porcoes.append(int(input()))
    total += porcoes[i] * gramas[i]
print(total)