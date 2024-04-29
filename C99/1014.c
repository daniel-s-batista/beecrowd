#include <stdio.h>
int main() {
    int km;
    float combustivel;
    scanf("%d%f", &km, &combustivel);
    printf("%.3f km/l\n", km / combustivel);
    return 0;
}

