#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int r=0,p=1;
    while(n>0){
        int rem=n%2;
        n/=2;
        r+=rem*p;
        p*=10;
    }
    printf("%d",r);
}