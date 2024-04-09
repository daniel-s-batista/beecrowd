#include <stdio.h>
int main() {
	int N, input, n1 = 0, n2 = 0, n3 = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		n1++;
		n2 = n1 + 1;
		n3 = n2 + 1;
		printf("%d %d %d PUM\n", n1, n2, n3);
		n1 += 3;
	}
}
