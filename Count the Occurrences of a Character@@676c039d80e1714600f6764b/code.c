#include <stdio.h>
int main(){
    char s[100];
    char l;

    fgets(s,sizeof(s),stdin);
    scanf("%c",&l);
    int c=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]==l){
            c++;
        }
    }

    printf("%d",c);
}