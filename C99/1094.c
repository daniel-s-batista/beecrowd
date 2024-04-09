#include <stdio.h>
 
int main() {
    int N, Quantia, total;
    float coelho = 0, rato = 0, sapo = 0, perc, perr, pers;
    char Tipo;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &Quantia);
        scanf(" %c", &Tipo);
        if (Tipo == 'C')
        	coelho += Quantia;
        else if (Tipo == 'R')
        	rato += Quantia;
        else if (Tipo == 'S')
			sapo += Quantia;
    }
    total = coelho + rato + sapo;
    perc = coelho / total * 100;
    perr = rato / total * 100;
    pers = sapo / total * 100;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %.0f\n", coelho);
    printf("Total de ratos: %.0f\n", rato);
    printf("Total de sapos: %.0f\n", sapo);
    printf("Percentual de coelhos: %.2f %\n", perc);
    printf("Percentual de ratos: %.2f %\n", perr);
    printf("Percentual de sapos: %.2f %\n", pers);
    return 0;
}
