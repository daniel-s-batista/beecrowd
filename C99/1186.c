#include <stdio.h>
#include <math.h>
#define TF 12
int main() {
	int	i, j, cont;
	float M[TF][TF], resultado = 0;
	char O;
	scanf("%c", &O);
	for (i = 0; i < TF; i++)
		for (j = 0; j < TF; j++)
			scanf("%f", &M[i][j]);
	for (i = TF - 1; i > 0; i--)
		for (j = TF - 1; j > TF - i - 1; j--) {
			resultado += M[i][j];
			cont++;
		}
	if (O == 'M' || O == 'm')
		resultado /= cont;
	printf("%.1f\n", resultado);
	return 0;
}

