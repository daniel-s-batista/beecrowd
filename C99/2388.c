#include <stdio.h>
int main() {
	int qntd, hrs, kmh, soma = 0;
	scanf("%d", &qntd);
	for (int i = 0; i < qntd; i++) {
		scanf("%d%d", &hrs, &kmh);
		soma += (hrs * kmh);
	}
	printf("%d\n", soma);
    return 0;
}
