#include <stdio.h>
int main() {
    float A, B, C, med;
    scanf("%f%f%f", &A, &B, &C);
    med = (A*2+B*3+C*5)/10;
    printf("MEDIA = %.1f\n", med);
    return 0;
}
