coelhos = 0
ratos = 0
sapos = 0
for i in range(int(input())):
    qntd, tipo = input().split()
    qntd = int(qntd)
    match (tipo):
        case 'C':
            coelhos += qntd
        case 'R':
            ratos += qntd
        case 'S':
            sapos += qntd
print("Total: {} cobaias".format(coelhos+ratos+sapos))
print("Total de coelhos:", coelhos)
print("Total de ratos:", ratos)
print("Total de sapos:", sapos)
print("Percentual de coelhos: {:.2f} %".format(coelhos / (coelhos+ratos+sapos) * 100))
print("Percentual de ratos: {:.2f} %".format(ratos / (coelhos+ratos+sapos) * 100))
print("Percentual de sapos: {:.2f} %".format(sapos / (coelhos+ratos+sapos) * 100))
