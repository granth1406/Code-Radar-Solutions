#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
        printf("%c",str[i]-32);
        }else{
            printf("%c",str[i]);
        }
    }
    return 0;
}