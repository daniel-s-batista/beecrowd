numeros = []
for i in range(int(input())):
    if i > 0:
        print('', end=' ')
    if i == 0:
        numeros.append(0)
    elif i == 1:
        numeros.append(1)
    else:
        numeros.append(numeros[i - 2] + numeros[i - 1])
    print(numeros[i], end='')
print('')
