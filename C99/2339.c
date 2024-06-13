#include <stdio.h>
int main() {
    long int competidores, qntd_papel, papel_comp;
    scanf("%ld%ld%ld", &competidores, &qntd_papel, &papel_comp);
    if (qntd_papel >= competidores * papel_comp)
        printf("S\n");
    else printf("N\n");
    return 0;
}

