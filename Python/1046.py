inicio, fim = map(int, input().split())
if inicio < fim:
    print("O JOGO DUROU", fim - inicio,"HORA(S)")
elif inicio > fim:
    print("O JOGO DUROU", 24 - inicio + fim,"HORA(S)")
else:
    print("O JOGO DUROU 24 HORA(S)")
