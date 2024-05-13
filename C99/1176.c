#include <stdio.h>
#define limite 61
int main() {
	// long long int -> Declara variáveis inteiras de 64 bits
    long long int vet[limite], qntd;
    int i, posicao;
    vet[0] = 0;
    vet[1] = 1;
    for(i = 2; i < limite; i++)
    	vet[i] = vet[i - 1] + vet[i - 2];
    scanf("%lld", &qntd);
    for(i = 0; i < qntd; i++) {
    	scanf("%d", &posicao);
    	printf("Fib(%d) = %lld\n", posicao, vet[posicao]);
    }
    return 0;
}

