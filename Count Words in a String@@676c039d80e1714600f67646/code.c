#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int wordcount=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==' '&& 'A'<=str[i+1]<='Z' || 'a'<=str[i+1]<='z'){
            wordcount++;
        }
    }
    printf("%d", wordcount+1);
}