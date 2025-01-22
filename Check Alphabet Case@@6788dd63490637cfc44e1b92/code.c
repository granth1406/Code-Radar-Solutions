#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%c",&c);

    if(c>='a' && a<='z'){
        printf("Uppercase");
    }else if(c>='A' && c<='Z'){
        printf("Lowercase");
    }else{
        printf("Not an alphabet");
    }
}