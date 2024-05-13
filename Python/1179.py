TF = 5
limite = 15
par, impar = [0 for i in range(TF)], [0 for i in range(TF)]
TLP, TLI = 0, 0
for i in range(limite):
    num = int(input())
    if num % 2 == 0:
        par[TLP] = num
        if TLP >= TF - 1:
            TLP = 0
            while TLP < TF:
                print("par[{}] = {}".format(TLP, par[TLP]))
                TLP += 1
            TLP = 0
        else:
            TLP += 1
    else:
        impar[TLI] = num
        if TLI >= TF - 1:
            TLI = 0
            while TLI < TF:
                print("impar[{}] = {}".format(TLI, impar[TLI]))
                TLI += 1
            TLI = 0
        else:
            TLI += 1
for i in range(TLI):
    print("impar[{}] = {}".format(i, impar[i]))
for i in range(TLP):
    print("par[{}] = {}".format(i, par[i]))
