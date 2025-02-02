#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    char str2[100];
    fgets(str2,sizeof(str2),stdin);
    int len=0;
    while(str2[len]!='\0'){
        len++;
    }

    for(int i=0;str[i]!='\0';i++){
        for(int j=len-1;str2>=0;j++){
            if(str[i]!=str2[j]){
                print("No");
                return 0;
            }
        }
    }
    printf("Yes");
}