#include <stdio.h>
#include <string.h> 
#define TF1 101
#define TF2 101
int main() {
	int qntd, maior_string, i, j, pos, pos_f, primeira_execucao = 1;
	char strings[TF1][TF2], strings_final[TF1][TF2];
	do {
		scanf("%d", &qntd);
		getchar();
		if (qntd > 0) {
			if (primeira_execucao == 0)
				printf("\n");
			for (i = 0; i < qntd; i++)
				for (j = 0; j < TF2; j++)
					strings_final[i][j] = '\0';
			for (i = 0; i < qntd; i++)
				gets(strings[i]);
			for (i = 0; i < qntd; i++) {
				pos = 0;
				pos_f = 0;
				while(pos < strlen(strings[i])) {
					if(strings[i][pos] != ' ') {
						strings_final[i][pos_f] = strings[i][pos];
						pos_f++;
					}
					if (pos_f > 0 && pos + 2 < TF2 - 1 && strings_final[i][pos_f - 1] != ' ')
						if (strings[i][pos + 1] == ' ' && strings[i][pos + 2] != ' ' && strings[i][pos + 2] != '\0') {
							strings_final[i][pos_f] = ' ';
							pos_f++;
						}
					pos++;
				}
				strings_final[i][pos_f] = '\0';
				maior_string = 0;
				for (j = 0; j < qntd; j++)
					if (strlen(strings_final[j]) > maior_string)
						maior_string = strlen(strings_final[j]);
				for (int k = 0; k < qntd; k++) {
					pos_f = 0;
					while (pos_f < maior_string && strlen(strings_final[k]) != maior_string) {
						for (j = maior_string - 1; j > 0; j--)
							strings_final[k][j] = strings_final[k][j - 1];
						strings_final[k][pos_f] = ' ';
						pos_f++;
					}
				}
			}
			for (i = 0; i < qntd; i++)
				printf("%s\n", strings_final[i]);
			primeira_execucao = 0;
		}
	} while (qntd > 0);
	return 0;
}

