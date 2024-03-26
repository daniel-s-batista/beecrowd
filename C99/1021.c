#include <stdio.h>
int main() {
    double N;
    int cnt;
    scanf("%lf", &N);
    printf("NOTAS:\n");
    cnt = 0;
    while (N >= 100) {
        cnt++;
        N -= 100;
    }
    printf("%d nota(s) de R$ 100.00\n", cnt);
    cnt = 0;
    while (N >= 50) {
        cnt++;
        N -= 50;
    }
    printf("%d nota(s) de R$ 50.00\n", cnt);
    cnt = 0;
    while (N >= 20) {
        cnt++;
        N -= 20;
    }
    printf("%d nota(s) de R$ 20.00\n", cnt);
    cnt = 0;
    while (N >= 10) {
        cnt++;
        N -= 10;
    }
    printf("%d nota(s) de R$ 10.00\n", cnt);
    cnt = 0;
    while (N >= 5) {
        cnt++;
        N -= 5;
    }
    printf("%d nota(s) de R$ 5.00\n", cnt);
    cnt = 0;
    while (N >= 2) {
        cnt++;
        N -= 2;
    }
    printf("%d nota(s) de R$ 2.00\n", cnt);
    printf("MOEDAS:\n");
    cnt = 0;
    while (N >= 1) {
        cnt++;
        N -= 1;
    }
    printf("%d moeda(s) de R$ 1.00\n", cnt);
    cnt = 0;
    while (N >= 0.5) {
        cnt++;
        N -= 0.5;
    }
    printf("%d moeda(s) de R$ 0.50\n", cnt);
    cnt = 0;
    while (N >= 0.25) {
        cnt++;
        N -= 0.25;
    }
    printf("%d moeda(s) de R$ 0.25\n", cnt);
    cnt = 0;
    while (N >= 0.10) {
        cnt++;
        N -= 0.10;
    }
    printf("%d moeda(s) de R$ 0.10\n", cnt);
    cnt = 0;
    while (N >= 0.05) {
        cnt++;
        N -= 0.05;
    }
    printf("%d moeda(s) de R$ 0.05\n", cnt);
    cnt = N / 0.01;
    printf("%d moeda(s) de R$ 0.01\n", cnt);
    return 0;
}
