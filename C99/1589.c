#include <stdio.h>
int main() {
	long int qntd, r1, r2;
	scanf("%ld", &qntd);
	while (qntd > 0) {
		scanf("%ld%ld", &r1, &r2);
		printf("%ld\n", r1 + r2);
		qntd--;
	}
	return 0;
}

