#include <stdio.h>
#define TF 5
#define limite 15
int main() {
    int par[TF], impar[TF], TLP = 0, TLI = 0, num;
    for(int i = 0; i < limite; i++) {
    	scanf("%d", &num);
    	if (num % 2 == 0) {
    		par[TLP] = num;
    		if (TLP >= TF - 1) {
    			TLP = 0;
    			while(TLP < TF) {
    				printf("par[%d] = %d\n", TLP, par[TLP]);
    				TLP++;
    			}
    			TLP = 0;
    		}
    		else TLP++;
    	}
    	else {
    		impar[TLI] = num;
    		if (TLI >= TF - 1) {
    			TLI = 0;
    			while(TLI < TF) {
    				printf("impar[%d] = %d\n", TLI, impar[TLI]);
    				TLI++;
    			}
    			TLI = 0;
    		}
    		else TLI++;
    	}
    }
    for(int i = 0; i < TLI; i++)
    	printf("impar[%d] = %d\n", i, impar[i]);
    for(int i = 0; i < TLP; i++)
    	printf("par[%d] = %d\n", i, par[i]);
    return 0;
}

