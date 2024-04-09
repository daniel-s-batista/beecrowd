#include <stdio.h>
int main() {
	int N, cnt, res;
	scanf("%d", &N);
	cnt = 0;
	while (cnt < 10) {
		cnt++;
		res = cnt * N;
		printf("%d x %d = %d\n", cnt, N, res);
	}
}
