#include <stdio.h>
int main() {
    int entrada, anos = 0, meses = 0;
    scanf("%d", &entrada);
    while (entrada >= 365) {
        anos++;
        entrada -= 365;
    }
    printf("%d ano(s)\n", anos);
    while (entrada >= 30) {
        meses++;
        entrada -= 30;
    }
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", entrada);
    return 0;
}

