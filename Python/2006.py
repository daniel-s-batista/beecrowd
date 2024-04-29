cha = int(input())
alternativas = input().split()
for i in range(len(alternativas)):
    alternativas[i] = int(alternativas[i])
acertos = 0
for i in range(len(alternativas)):
    if alternativas[i] == cha:
        acertos += 1
print(acertos)
