def bee1182():
    horizontal = 12
    vertical = 12
    coluna = int(input())
    operacao = input().upper()
    resultado = 0
    M = [[0 for i in range(horizontal)] for i in range(vertical)]
    for i in range(vertical):
        for j in range(horizontal):
            M[i][j] = float(input())
            if j == coluna:
                resultado += M[i][j]
    if operacao == 'M':
        resultado /= vertical
    print("{:.1f}".format(resultado))
bee1182()
