#include <stdio.h>
#include <string.h>

int main() {
    int s[40];
    scanf("%s",&s);
    int len=strlen(s);
    for(int i=len-1;i>=0;i++){
        printf("%c",s[i]);
    }
}