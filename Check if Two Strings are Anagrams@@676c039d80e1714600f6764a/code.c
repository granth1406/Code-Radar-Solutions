#include <stdio.h>

int main(){
    char s1[100];
    char s2[100];
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);

    int c;
    for(int i=0;s2[i]!='\0';i++){
        c++;
    }

    int r=1;

    for(int i=0;s1[i]!='\0';i++){
        for(int j=c;j>=0;j++){
            if(s1[i]!=s2[j]){
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
}