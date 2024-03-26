#include <stdio.h>
#include <math.h>
int main() {
    double R, vol, pi;
    pi = 3.14159;
    scanf("%lf", &R);
    vol = (4.0 / 3) * pi * pow(R,3);
    printf("VOLUME = %.3f\n", vol);
    return 0;
}
