def nota(N):
    if N <= 0:
        print("E")
    elif N <= 35:
        print("D")
    elif N <= 60:
        print("C")
    elif N <= 85:
        print("B")
    elif N <= 100:
        print("A")
nota(int(input()))