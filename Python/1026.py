def main():
    while True:
        try:
            n1, n2 = map(int, input().split())
            nf = 0
            for i in range(32):
                nf += (bool(n1 % 2 != n2 % 2) * (2 ** (i)))
                n1 //= 2
                n2 //= 2
            print(nf)
        except EOFError:
            break
main()