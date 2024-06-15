#include <stdio.h>
 
int main() {
    float sal, imp;
    scanf("%f", &sal);
    if (sal <= 2000) {
        printf("Isento\n");
    }
    else if (sal <= 3000) {
        imp = (sal - 2000) * 0.08;
        printf("R$ %.2f\n", imp);
    }
    else if (sal <= 4500) {
        imp = (sal - 3000) * 0.18 + 1000 * 0.08;
        printf("R$ %.2f\n", imp);
    }
    else {
        imp = (sal - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08;
        printf("R$ %.2f\n", imp);
    }
    return 0;
}
