#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int c;
    scanf("%d",&c);
    for(int i=1;i<=n;i++){
        char ch='A'+n-i;
        for(int j=n;j>=i;j--){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}