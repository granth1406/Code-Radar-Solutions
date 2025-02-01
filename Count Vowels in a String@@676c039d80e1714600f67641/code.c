#include <stdio.h>

int main() {
    char s[20];
    fgets(s,sizeof(s),stdin);
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        char val=str[i];
        if(val=='a' || val=='e' || val=='i' || val=='o' || val=='u' || val=='A' || val=='E' || val=='I' || val=='O' || val=='U'){
            count++;
        }
    }
    printf("%d",count);
}