#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    char a;
    char b;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&a);
    scanf("%c",&b);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==a){
            str[i]=b;
        }
    }
    printf("%s",str);
}