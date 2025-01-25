#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[20];
    scanf("%s",&s);
    int count=0;
    for(char val:s){
        if(val=='a' || val=='e' || val=='i' || val=='o' || val=='u'){
            count++;
        }
    }
    printf("%d",count);
}