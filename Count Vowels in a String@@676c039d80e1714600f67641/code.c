#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[20];
    scanf("%s",&s);
    int count=0;
    for(int i=0;i!='\0';i++){
        char val=str[i];
        if(val=='a' || val=='e' || val=='i' || val=='o' || val=='u'){
            count++;
        }
    }
    printf("%d",count);
}