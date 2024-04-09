#include <stdio.h>
int main() {
    int N, atu, n1 = 1, n2 = 1;
    scanf("%d", &N);
    if (N == 1)
        printf("0\n");
    else if (N == 2)
        printf("0 1\n");
    else if (N == 3)
        printf("0 1 1\n");
    else {
    	printf("0 1 1");
        for (int i = 3; i < N; i++) {
            atu = n1 + n2;
            printf(" %d", atu);
            n1 = n2;
            n2 = atu;
        }
        printf("\n");
    }
    return 0;
}
