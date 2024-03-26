#include <stdio.h>
int main() {
    int n1, n2, n3, ord1, ord2, ord3;
    scanf("%d%d%d", &n1, &n2, &n3);
    if (n1 > n2 && n1 > n3) {
        ord1 = n1;
        if (n2 > n3) {
            ord2 = n2;
            ord3 = n3;
        }
        else {
            ord2 = n3;
            ord3 = n2;
        }
    }
    else if (n2 > n1 && n2 > n3) {
        ord1 = n2;
        if (n1 > n3) {
            ord2 = n1;
            ord3 = n3;
        }
        else {
            ord2 = n3;
            ord3 = n1;
        }
    }
    else {
        ord1 = n3;
        if (n1 > n2) {
            ord2 = n1;
            ord3 = n2;
        }
        else {
            ord2 = n2;
            ord3 = n1;
        }
    }
    printf("%d\n", ord3);
    printf("%d\n", ord2);
    printf("%d\n\n", ord1);
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    return 0;
}
