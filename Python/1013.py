def maior(a, b, c):
    mai = (a + b + abs(a - b)) / 2
    if mai == a:
        mai = a
    else:
        mai = b
    mai = (mai + c + abs(mai - c)) / 2
    if mai == c:
        mai = c
    return int(mai)
n1, n2, n3 = map(int, input().split())
print(maior(n1, n2, n3), "eh o maior")