#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nextPrimeDigit(int d) {
    if(d < 2) return 2;
    if(d == 2) return 3;
    if(d < 5) return 5;
    if(d < 7) return 7;
    return 2;
}

int incrementToPrimeDigits(int N) {
    char numStr[20];
    sprintf(numStr, "%d", N);

    for(int i = 0; numStr[i]; i++) {
        int d = numStr[i] - '0';
        numStr[i] = nextPrimeDigit(d) + '0';
    }

    return atoi(numStr);
}