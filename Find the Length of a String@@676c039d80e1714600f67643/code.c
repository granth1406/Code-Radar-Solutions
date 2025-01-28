#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    for(int i=0,str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}