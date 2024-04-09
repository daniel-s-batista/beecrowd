#include <stdio.h>
#include <math.h>
int main() {
    int N, pot;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
    	printf("%d", i);
    	pot = pow(i, 2);
    	printf(" %d", pot);
    	pot = pow(i, 3);
    	printf(" %d\n", pot);
    }
    return 0;
}
