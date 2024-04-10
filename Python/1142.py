def PUM(total):
    i = 0
    num = 1
    while i < total:
        print(num, num+1, num+2, "PUM")
        num += 4
        i += 1
PUM(int(input()))