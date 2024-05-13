#include <stdio.h>
#define TF 10000
int main() {
	int temp[TF], qntd, minutos, i, j, cont = 1, maior, menor, media; 
	do{
		scanf("%d%d", &qntd, &minutos);
		if(qntd != 0 && minutos != 0) {
			maior = 0;
			menor = 0;
			for(i = 0; i < qntd; i++) {
				media = 0;
				scanf("%d", &temp[i]);
				if (i >= minutos - 1) {
					for (j = i; j > i - minutos; j--)
						media += temp[j];
					media /= minutos;
					if(i == minutos - 1 || media > maior)
						maior = media;
					if(i == minutos - 1 || media < menor)
						menor = media;
				}
			}
			printf("Teste %d\n", cont);
			printf("%d %d\n\n", menor, maior);
			cont++;
		}
	} while(qntd != 0 && minutos != 0);
}

