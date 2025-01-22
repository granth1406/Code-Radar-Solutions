#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int y;
    scanf("%d",&y);
    if(y%4==0 && y%100!=0){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}