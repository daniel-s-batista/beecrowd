#include <stdio.h>
 
int main() {
    int T, A, B, C, D, E, cnt;
    cnt = 0;
    scanf("%d", &T);
    scanf("%d%d%d%d%d", &A, &B, &C, &D, &E);
    if (A == T)
        cnt++;
    if (B == T)
        cnt++;
    if (C == T)
        cnt++;
    if (D == T)
        cnt++;
    if (E == T)
        cnt++;
    printf("%d\n", cnt);
    return 0;
}
