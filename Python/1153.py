def fatorial(num):
    if num > 1:
        return num * fatorial(num - 1)
    else:
        return num
print(fatorial(int(input())))
