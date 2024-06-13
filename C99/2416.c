#include <stdio.h>
int main() {
    long long int C;
    int N;
    scanf("%lld%d", &C, &N);
    printf("%lld\n", C % N);
    return 0;
}

