def distperc(N):
    i = 0
    soma = 0
    while i < N:
        hrs, kmh = map(int, input().split())
        soma += hrs * kmh
        i += 1
    print(soma)
distperc(int(input()))