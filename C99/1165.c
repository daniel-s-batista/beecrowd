#include <stdio.h>
int main() {
    int N, num, res, div = 0, cnt = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num <= 3)
        	printf("%d eh primo\n", num);
        else {
        	while (cnt <= num) {
        		res = num % cnt;
        		if (res == 0)
        			div++;
				cnt++;
        	}
        	if (div <= 2)
				printf("%d eh primo\n", num);
			else printf("%d nao eh primo\n", num);
			cnt = 1;
			div = 0;
    	}
    }
    return 0;
}
