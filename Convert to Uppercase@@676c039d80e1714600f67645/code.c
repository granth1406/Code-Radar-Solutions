#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]-32);
    }
    return 0;
}