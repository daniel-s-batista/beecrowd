#include <stdio.h>
int main() {
    int N, X, res, som = 0, cnt = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
    	scanf("%d", &X);
    	while (cnt < X) {
    		res = X % cnt;
    		if (res == 0) {
    			som += cnt;
    		}
    		cnt++;
    	}
    	if (X == som) {
    		printf("%d eh perfeito\n", X);
    	}
    	else printf("%d nao eh perfeito\n", X);
    	cnt = 1;
    	som = 0;
    }
    return 0;
}
