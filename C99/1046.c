#include <stdio.h>
 
int main() {
    int ini, fim, tot;
    scanf("%d%d", &ini, &fim);
    if (ini == fim)
        tot = 24;
    else if (ini < fim)
        tot = fim - ini;
    else tot = (24 - ini + fim);
    printf("O JOGO DUROU %d HORA(S)\n", tot);
    return 0;
}
