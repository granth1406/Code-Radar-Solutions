#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='0' || str[i]!='1'){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}