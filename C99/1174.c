#include <stdio.h>
#define tamanho 100
int main() {
	int i;
    float vet[tamanho];
    for (i = 0; i < tamanho; i++)
    	scanf("%f", &vet[i]);
    for (i = 0; i < tamanho; i++)
    	if(vet[i] <= 10)
    		printf("A[%d] = %.1f\n", i, vet[i]);
    return 0;
}
