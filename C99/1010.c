#include <stdio.h>
int main() {
    int cod1, cod2, num1, num2;
    float val1, val2;
    scanf("%d%d%f", &cod1, &num1, &val1);
    scanf("%d%d%f", &cod2, &num2, &val2);
    printf("VALOR A PAGAR: R$ %.2f\n", val1 * num1 + val2 * num2);
    return 0;
}
