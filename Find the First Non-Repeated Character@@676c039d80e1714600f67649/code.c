#include <stdio.h>

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);

    for(int i=0;str[i]!='\0';i++){
        int r=0;
        for(int j=0;str[j]!='\0' && j<i ;j++){
            if(str[i]==str[j]){
                r=1;
                break;
            }
        }
        if(r==0){
            printf("%c",str[i]);
            return 0;
        }
    }
}