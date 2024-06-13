#include <stdio.h>
int main() {
	int qntd, i, saldo, menor_saldo, movimento;
	scanf("%d%d", &qntd, &saldo);
	for (i = 0; i < qntd; i++) {
		scanf("%d", &movimento);
		saldo += movimento;
		if (i == 0 || saldo < menor_saldo)
			menor_saldo = saldo;
	}
	printf("%d\n", menor_saldo);
	return 0;
}

