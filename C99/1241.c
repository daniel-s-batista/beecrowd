#include <stdio.h>
#include <string.h>
#define TF 1001
int main() {
	int qntd, TL1, TL2;
	long int i, j, pos;
	char num1[TF], num2[TF], numcomp[TF];
	scanf("%d", &qntd);
	for (i = 0; i < qntd; i++) {
		scanf(" %s", &num1);
		TL1 = strlen(num1);
		scanf(" %s", &num2);
		TL2 = strlen(num2);
		for (j = 0; j < TL2; j++)
			numcomp[j] = num1[TL1 - TL2 + j];
		j = 0;
		while (j < TL2 && numcomp[j] == num2[j])
			j++;
		if (j == TL2)
			printf("encaixa\n");
		else printf("nao encaixa\n");
	}
	return 0;
}

