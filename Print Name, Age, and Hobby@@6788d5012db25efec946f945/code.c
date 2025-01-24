#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char s1[10],s2[10],s3[10];
    scanf("%s %s %s",&s1,&s2,&s3);
    printf("Name: %s\n",s1);
    printf("Age: %s\n",s2);
    printf("Hobby: %s",s3);

}