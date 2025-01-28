#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    char s2[100];
    fgets(s,100,stdin);
    fgets(s2,100,stdin);
    printf("%s%s",s,s2);
}