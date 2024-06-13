qntd = int(input())
for i in range(qntd):
    num = int(input())
    primo = True
    cont = 2
    while primo == True and cont < num:
        if num % cont == 0:
            primo = False
        cont += 1
    if primo == True:
        print(num, "eh primo")
    else:
        print(num,  "nao eh primo")
