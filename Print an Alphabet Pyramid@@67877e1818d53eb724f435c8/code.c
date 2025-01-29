#include <stdio.h>

int main() {
    int c;
    scanf("%c",&c);
    for(int i=1;i<=c;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}