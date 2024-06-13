#include <stdio.h>
int main() {
    int vet[4]; // A -> pos. 0; B -> pos. 1; C -> pos. 2; D -> pos. 3
    for (int i = 0; i < 4; i++)
        scanf("%d", &vet[i]);
    if (vet[1] > vet[2] && vet[3] > vet[0] && vet[2] + vet[3] > vet[0] + vet[1] && vet[2] > 0 && vet[3] > 0 && vet[0] % 2 == 0)
        printf("Valores aceitos\n");
    else printf("Valores nao aceitos\n");
    return 0;
}

