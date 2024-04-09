#include <stdio.h>
int main() {
	int N, cnt, fat;
	scanf("%d", &N);
	fat = N;
	cnt = N - 1;
	for (int i = N; i > 1; i--) {
		fat *= cnt;
		cnt--;
	}
	printf("%d\n", fat);
    return 0;
}
