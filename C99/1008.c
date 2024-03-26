#include <stdio.h>
int main() {
    int num, hrs;
    float sal;
    scanf("%d%d%f", &num, &hrs, &sal);
    printf("NUMBER = %d\n", num);
    sal *= hrs;
    printf("SALARY = U$ %.2f\n", sal);
    return 0;
}
