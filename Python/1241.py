for i in range(int(input())):
    n1, n2 = map(str, input().split())
    encaixa = False
    aux = str(n1[len(n1) - len(n2):])
    if n2 == aux:
        print("encaixa")
    else:
        print("nao encaixa")
