#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    for(int i='A';i<=n;i++){
        for(int j='A';j<=i;j++){
            printf('A'+j);
            printf(" ")
        }
        printf("\n");
    }

}