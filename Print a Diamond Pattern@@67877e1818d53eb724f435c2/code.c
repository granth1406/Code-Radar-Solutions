#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int s=0;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=(2*n-1);j++){
            printf("*");
        }
    }
    printf("\n");
}