#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=18 && b==1){
        print("Eligible");
    }else{
        print("Not Eligible");
    }
}