#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int k=i-1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");


        
    }
}