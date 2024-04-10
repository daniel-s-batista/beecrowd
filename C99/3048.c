#include <stdio.h>
int main() {
	int qntd, num_atu, num_ant = 0, soma = 0;
	scanf("%d", &qntd);
	for (int i = 0; i < qntd; i++) {
		scanf("%d", &num_atu);
		if (i == 0 || num_ant != num_atu) {
			soma++;
		}
		num_ant = num_atu;
	}
	printf("%d\n", soma);
	return 0;
}
