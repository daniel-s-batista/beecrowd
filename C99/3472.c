#include <stdio.h>
#define silabas 29
#define TF 2001
int main() {
	int criancas[TF], TL = 0, i, cont = 0;
	scanf("%d", &TL);
	for (i = 0; i < TL; i++)
		criancas[i] = 2;
	for (i = TL * 2 - 1; i > 0; i--) {
		for(int j = 0; j < TL; j++) printf("%d ", criancas[j]);
		printf("\n");
		for (int j = 0; j < silabas; j++) {
			if (cont < TL - 1)
				cont++;
			else cont = 0;
		}
		//cont += (silabas % TL);
		//while (cont > TL) cont -= TL;
		criancas[cont]--;
	}
	if (criancas[0] <= 0)
		printf("nao vai ganhar\n");
	else printf("vai ganhar\n");
	return 0;
}
