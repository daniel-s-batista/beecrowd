abas, acoes = map(int, input().split())
for i in range(acoes):
    acao = input().lower()
    if acao == "clicou":
        abas -= 1
    elif acao == "fechou":
        abas += 1
print(abas)
