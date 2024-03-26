#include <stdio.h>
int main() {
    int N, cdl;
    scanf("%d", &N);
    printf("%d\n", N);
    cdl = 0;
    while (N >= 100) {
        cdl++;
        N -= 100;
    }
    printf("%d nota(s) de R$ 100,00\n", cdl);
    cdl = 0;
    while (N >= 50) {
        cdl++;
        N -= 50;
    }
    printf("%d nota(s) de R$ 50,00\n", cdl);
    cdl = 0;
    while (N >= 20) {
        cdl++;
        N -= 20;
    }
    printf("%d nota(s) de R$ 20,00\n", cdl);
    cdl = 0;
    while (N >= 10) {
        cdl++;
        N -= 10;
    }
    printf("%d nota(s) de R$ 10,00\n", cdl);
    cdl = 0;
    while (N >= 5) {
        cdl++;
        N -= 5;
    }
    printf("%d nota(s) de R$ 5,00\n", cdl);
    cdl = 0;
    while (N >= 2) {
        cdl++;
        N -= 2;
    }
    printf("%d nota(s) de R$ 2,00\n", cdl);
    cdl = 0;
    while (N >= 1) {
        cdl++;
        N -= 1;
    }
    printf("%d nota(s) de R$ 1,00\n", cdl);
    return 0;
}
