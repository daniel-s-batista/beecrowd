#include <stdio.h>
#include <string.h>
int main() {
	int abas, acoes, i;
	char acao[10];
	scanf("%d%d", &abas, &acoes);
	getchar();
	for (i = 0; i < acoes; i++) {
		gets(acao);
		if (strcasecmp(acao, "clicou") == 0)
			abas--;
		else if (strcasecmp(acao, "fechou") == 0)
			abas++;
	}
	printf("%d\n", abas);
	return 0;
}

