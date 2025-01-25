#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&m);
    if(m%2!=0 && m<=12 && m>0){
        printf("31");
    }else if(m%2==0 && m!=2 && m<=12 && m>0){
        printf("30");
    }else if(m==2){
        printf("28");
    }else{
        printf("Invalid month");
    }
}