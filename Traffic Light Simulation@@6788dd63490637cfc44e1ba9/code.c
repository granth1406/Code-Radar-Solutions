#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char l;
    scanf("%c",&l);
    if(l=='R'){
        printf("Stop");
    }else if(l=='Y'){
        printf("Slow Down");
    }else if(l=='G'){
        printf("Go");
    }else{
        printf("Invalid input");
    }
}