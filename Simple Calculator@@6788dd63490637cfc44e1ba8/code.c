#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    switch(o){
        case '+':
            printf("%d",a+b);
        case '-':
            printf("%d",a-b);
        case '*':
            printf("%d",a*b);
        case '/':
            printf("%d",a/b);
    }
}