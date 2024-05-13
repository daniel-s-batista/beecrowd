#include <stdio.h>
#define tamanho 20
int main() {
	int N[tamanho], memoria, i;
	for (i = 0; i < tamanho; i++)
		scanf("%d", &N[i]);
	for (i = 0; i < tamanho / 2; i++) {
		memoria = N[i];
		N[i] = N[tamanho - 1 - i];
		N[tamanho - 1 - i] = memoria;
	}
	for (i = 0; i < tamanho; i++)
		printf("N[%d] = %d\n", i, N[i]);
}

