ligado = True
while ligado:
    n1, n2 = map(int, input().split())
    if n1 > n2:
        print("Decrescente")
    elif n1 < n2:
        print("Crescente")
    else:
        ligado = False
