for i in range(int(input())):
    num = int(input())
    soma = 0
    for j in range(1, num):
        if num % j == 0:
            soma += j
    if num == soma:
        print(num, "eh perfeito")
    else:
        print(num, "nao eh perfeito")
