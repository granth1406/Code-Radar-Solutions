#include <stdio.h>

int main() {
    int s[40];
    fgets(s,sizeof(s),stdin);
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    for(int j=i-1;j>=0;j++){
        printf("%c ",s[j]);
    }
}