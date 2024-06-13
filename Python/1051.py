salario = float(input())
imposto = 0
if salario <= 2000:
    print("Isento")
else:
    if salario <= 3000:
        imposto = (salario - 2000) * 0.08
    elif salario <= 4500:
        imposto = (salario - 3000) * 0.18 + 80
    else:
        imposto = (salario - 4500) * 0.28 + 350
    print("R$ {:.2f}".format(imposto))
