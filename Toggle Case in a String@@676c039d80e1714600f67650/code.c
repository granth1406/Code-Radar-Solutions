#include <stdio.h>
int main(){
    char str[100];
    fget(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\n',i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
        printf("%c",str[i]);
    }

}