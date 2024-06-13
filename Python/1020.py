entrada = int(input())
anos = 0
meses = 0
while entrada >= 365:
    anos += 1
    entrada -= 365
while entrada >= 30:
    meses += 1
    entrada -= 30
print(anos, "ano(s)")
print(meses, "mes(es)")
print(entrada, "dia(s)")
