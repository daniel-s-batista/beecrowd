#include <stdio.h>
 
int main() {
    float sal, nsal, rea;
    int per;
    scanf("%f", &sal);
    if (sal <= 400) {
        nsal = sal * 1.15;
        rea = sal * 0.15;
        per = 15;
    }
    else if (sal <= 800) {
        nsal = sal * 1.12;
        rea = sal * 0.12;
        per = 12;
    }
    else if (sal <= 1200) {
        nsal = sal * 1.10;
        rea = sal * 0.10;
        per = 10;
    }
    else if (sal <= 2000) {
        nsal = sal * 1.07;
        rea = sal * 0.07;
        per = 7;
    }
    else {
        nsal = sal * 1.04;
        rea = sal * 0.04;
        per = 4;
    }
    printf("Novo salario: %.2f\n", nsal);
    printf("Reajuste ganho: %.2f\n", rea);
    printf("Em percentual: %d %%\n", per);
    return 0;
}
