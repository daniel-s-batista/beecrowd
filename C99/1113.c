#include <stdio.h>
int main() {
    int X, Y, interruptor = 1;
    while (interruptor == 1) {
        scanf("%d%d", &X, &Y);
        if (X > Y) {
            printf("Decrescente\n");
        }
        else if (X < Y) {
            printf("Crescente\n");
        }
        else interruptor = 0;
    }
    return 0;
}
