#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s[100];
    char s2[100];
    fgets(s,sizeof(s),stdin);
    fgets(s2,sizeof(s2),stdin);
    
    int i=0,j=0;

    while(s[i]!='\0'){
        printf("%s",s[i]);
        i++;
    }
    while(s2[j]!='\0'){
        printf("%s",s2[j]);
        j++;
    }
}