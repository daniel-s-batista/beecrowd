#include <stdio.h>
#define TF 1000
int main() {
	int X[TF], TL, i, pos, menor_valor, menor_pos;
	scanf("%d", &TL);
	for (i = 0; i < TL; i++)
		scanf("%d", &X[i]);
	menor_valor = X[0];
	menor_pos = 0;
	for (i = 1; i < TL; i++) {
		pos = 0;
		while (pos < TL && X[pos] >= menor_valor)
			pos++;
		if (pos < TL) {
			menor_valor = X[pos];
			menor_pos = pos;
		}
	}
	printf("Menor valor: %d\n", menor_valor);
	printf("Posicao: %d\n", menor_pos);
	return 0;
}

