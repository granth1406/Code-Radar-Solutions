#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    for(char i='A';i<=c;i++){
        for(char j='A';j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}