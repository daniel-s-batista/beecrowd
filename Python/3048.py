cont = 0
num_anterior = 0
for i in range(int(input())):
    num = int(input())
    if num_anterior != num:
        cont += 1
        num_anterior = num
print(cont)
