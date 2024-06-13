#include <stdio.h>
#include <string.h>
#define TF 32
int main() {
	char letra, input[TF];
	int qntd, i, j, cont_p, cont_e, num;
	while (scanf("%d", &qntd) != EOF) {
		getchar();
		for (i = 0; i < qntd; i++) {
			cont_p = 0;
			cont_e = 0;
			gets(input);
			for (j = 0; input[j] == '.'; j++)
				cont_p++;
			for (j = 0; j < strlen(input); j++)
				if(input[j] == ' ')
					cont_e++;
			num = cont_p + cont_e * 3;
			letra = 'a' + num - 1;
			printf("%c\n", letra);
		}	
	}
}

