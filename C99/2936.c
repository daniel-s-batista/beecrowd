#include <stdio.h>
int main() {
	int gramas[5] = {300, 1500, 600, 1000, 150}, porcoes[5], total = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &porcoes[i]);
		total += porcoes[i] * gramas[i];
	}
	total += 225;
	printf("%d\n", total);
	return 0;
}

