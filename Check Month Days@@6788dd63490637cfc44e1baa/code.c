#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&month);

    if(m%2!=0){
        printf("31")
    }else if(m%2==0 %% m!=2){
        printf("30");
    }else if(m==2){
        printf("28");
    }else{
        printf("Invalid month");
    }
}