#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c, mai;
	scanf("%d%d%d", &a, &b, &c);
	mai = (a + b + abs(a - b)) / 2;
	if (mai == a) mai = a;
	else mai = b;
	mai = (mai + c + abs(mai - c)) / 2;
	if (mai == c) mai = c;
	printf("%d eh o maior\n", mai);
}
