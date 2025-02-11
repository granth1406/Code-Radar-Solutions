#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int r=0;
    for(int i=0;str[i]!='\0';i++){
        for(int j=i+1;str[j]!='\0';j++){
            if(str[i]!=str[j]){
                r=1;
            }

        
    
    if(r==0){
        printf("%c",str[i]);
        return 0;
    }
        }
    }
    printf("-");
}