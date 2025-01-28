#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main(){
    char s1[10],s2[10];
    scanf("%s %s",&s1,&s2);
    printf("You entered: %s and %s",s1,s2);

}