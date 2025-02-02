#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    char a;
    scanf("%c",&a);

    for(int i=0;str[i]!='\0';i++){
        char v=str[i];
        if(v=='A'||v=='E'||v=='I'||v=='O'||v=='U'||v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){
            str[i]=a;
        }
    }
    printf("%s",str);
}