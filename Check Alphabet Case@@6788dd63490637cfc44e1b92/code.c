#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);

    if(c>='a' && c<='z'){
        printf("Lowercase");
    }else if(c>='A' && c<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
}