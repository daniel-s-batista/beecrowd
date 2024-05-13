hi, mi, hf, mf = map(int, input().split())
ht = 0
mt = 0
if hi < hf:
    ht = hf - hi
    if mi < mf:
        mt = mf - mi
    elif mi > mf:
        ht -= 1
        mt = 60 - mi + mf
    else:
        mt = 0
elif hi > hf:
    ht = 24 - hi + hf
    if mi < mf:
        mt = mf - mi
    elif mi > mf:
        ht -= 1
        mt = 60 - mi + mf
    else:
        mt = 0
else:
    if mi < mf:
        ht = 0
        mt = mf - mi
    elif mi > mf:
        ht = 23
        mt = 60 - mi + mf
    else:
        ht = 24
        mt = 0
print("O JOGO DUROU", ht, "HORA(S) E", mt, "MINUTO(S)")