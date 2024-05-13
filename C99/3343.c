#include <stdio.h>
int main() {
	long long int n, x, p, m, g, qntd = 1, cont_p = 0, cont_m = 0, cont_g = 0;
	scanf("%lld%lld", &n, &x);
	char horda[n + 1];
	int muralha_restante[n];
	for (int i = 0; i < n; i++) muralha_restante[i] = x;
	scanf("%s", &horda);
	scanf("%lld%lld%lld", &p, &m, &g);
	for (int i = 0; i < n; i++) {
		char tamanho_atual = horda[i];
		switch (tamanho_atual) {
			case 'P':
				while (muralha_restante[cont_p] < p){
					cont_p++;
					if (cont_p > cont_m && cont_p > cont_g) qntd++;
				}
				muralha_restante[cont_p] -= p;
				break;
			case 'M':
				while (muralha_restante[cont_m] < m){
					cont_m++;
					if (cont_m > cont_p && cont_m > cont_g) qntd++;
				}
				muralha_restante[cont_m] -= m;
				break;
			case 'G':
				while (muralha_restante[cont_g] < g){
					cont_g++;
					if (cont_g > cont_m && cont_g > cont_p) qntd++;
				}
				muralha_restante[cont_g] -= g;
				break;
		}
	}
	printf("%lld\n", qntd);
}
