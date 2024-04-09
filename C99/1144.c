#include <stdio.h>
#include <math.h>
int main() {
    int N, n1, n2, n3, n4, n5;
    scanf("%d", &N);
    n1 = 1;
    for (int i = 0; i < N; i++) {
    	n2 = pow(n1, 2);
    	n3 = pow(n1, 3);
    	printf("%d %d %d\n", n1, n2, n3);
    	n4 = n2 + 1;
    	n5 = n3 + 1;
    	printf("%d %d %d\n", n1, n4, n5);
    	n1++;
    }
    return 0;
}
