#include <stdio.h>
int main() {
	float salf, vendas;
	char nome[99];
	scanf(" %s", &nome);
	scanf("%f%f", &salf, &vendas);
	printf("TOTAL = R$ %.2f\n", salf + vendas * 0.15);
    return 0;
}
