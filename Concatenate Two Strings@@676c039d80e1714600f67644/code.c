#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    char s2[100];
    fgets(s,sizeof(s),stdin);
    fgets(s2,sizeof(s2),stdin);
    printf("%s",s+s2);
}