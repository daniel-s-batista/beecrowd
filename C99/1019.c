#include <stdio.h>
int main() {
    int N, min, hrs;
    scanf("%d", &N);
    min = 0;
    hrs = 0;
    while (N > 60) {
        min += 1;
        N -= 60;
    }
    while (min > 60) {
        hrs += 1;
        min -= 60;
    }
    printf("%d:%d:%d\n", hrs, min, N);
    return 0;
}
