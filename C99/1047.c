#include <stdio.h>
int main() {
	int iniH, iniM, fimH, fimM, totH, totM;
	scanf("%d%d%d%d", &iniH, &iniM, &fimH, &fimM);
	if (iniH == fimH) {
		if (iniM == fimM) {
			totH = 24;
			totM = 0;
		}
		else {
			if (iniM < fimM) {
				totH = 0;
				totM = fimM - iniM;
			}
			else {
				totH = 23;
				totM = (60 - iniM + fimM);
			}
		}
	}
	else {
		if (iniH < fimH)
			totH = fimH - iniH;
		else totH = (24 - iniH + fimH);
		if (iniM < fimM)
			totM = fimM - iniM;
		else {
			totM = (60 - iniM + fimM);
			totH--;
		}
	}
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totH, totM);
    return 0;
}
