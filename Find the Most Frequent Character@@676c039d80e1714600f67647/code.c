#include <stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    char maxele=str[0];
    int max=0;
    int count = 0;
    for(int i=0;str[i]!='\n';i++){
        for(int j=0;str[j]!='\n';j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>max){
            maxele=str[i];
        }
    }
    printf("%c",maxele);
}