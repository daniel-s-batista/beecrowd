#include <stdio.h>
#define vertical 12
#define horizontal 12
int main() {
    int coluna, i, j, contM;
    float M[vertical][horizontal], resultado = 0;
    char escolha[1];
    scanf("%d %c", &coluna, &escolha[0]);
    for (i = 0; i < vertical; i++)
        for (j = 0; j < horizontal; j++) {
            scanf("%f", &M[i][j]);
            if (j == coluna)
                resultado += M[i][j];
        }
    if (escolha[0] == 'M' || escolha [0] == 'm')
        resultado /= vertical;
    printf("%.1f\n", resultado);
    return 0;
}

