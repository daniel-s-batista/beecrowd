#include<stdio.h>
#include <math.h>
#define bits 32
int main() {
    long long int n1[bits], n2[bits], entrada1 = 0, entrada2, soma, cont = 0;
    while(!feof(stdin)) {
    	soma = 0;
    	cont = 0;
	    if (scanf("%lld%lld", &entrada1, &entrada2) != EOF) {
	    	for (int i = bits - 1; i >= 0; i--) {
		        n1[i] = entrada1 % 2;
		        entrada1 = floor(entrada1 / 2);
		    }
	    	for (int i = bits - 1; i >= 0; i--) {
		        n2[i] = entrada2 % 2;
		        entrada2 = floor(entrada2 / 2);
		    }
		    for (int i = bits - 1; i >= 0; i--){
		    	if (n1[i] == n2[i])
		    		n2[i] = 0;
		    	else n2[i] = 1;
		    	soma += pow(2, cont) * n2[i];
		    	cont++;
			}
			printf("%lld\n", soma);
			for (int i = bits - 1; i >= 0; i--){
		    	n1[i] = 0;
		    	n2[i] = 0;
			}
	    }
	}
}

