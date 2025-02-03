#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    int r=1;
    int right=0,left=len-1;
    while(right<left){
        if(str[left]!=str[right]){
            r=0;
            break;
        }
        left--;
        right++;

    }
    if (r==0){
        printf("No");
    }else{
        printf("Yes");
    }
}