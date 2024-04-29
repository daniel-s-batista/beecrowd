#include <stdio.h>
#define kml 12
int main() {
	int tempo, velmed;
	scanf("%d%d", &tempo, &velmed);
	printf("%.3f\n", 1.0 * velmed * tempo / kml);
	return 0;
}

