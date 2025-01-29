#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    
    int n,r=1;
    scanf("%d",&n);
    if(n<=1){
        r=0;
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                r=1;
                break;
            }
        }
    }
    if(r==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}