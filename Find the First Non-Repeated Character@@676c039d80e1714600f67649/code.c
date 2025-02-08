#include <stdio.h>

int main() {
    char str[];
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        int r=0;
        for(int j=0;str[j]!='\0',j++){
            if(str[i]==str[j]){
                r=1;
            }
        }
        if(r==0){
            printf("%c",str[i]);
            return 0;
        }
    }
}