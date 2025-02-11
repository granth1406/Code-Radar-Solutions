#include <stdio.h>

int main() {
    
    int n,r=0;
    scanf("%d",&n);
    if(n<=1){
        r=1;
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                r=1;
                break;
            }
        }
    }
    if(r==0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}