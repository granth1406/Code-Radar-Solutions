#include <stdio.h>
#include <math.h>
int main() {
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    if(o=='+'){
        printf("%d",a+b);
    }else if(o=='-'){
        printf("%d",a-b);
    }else if(o=='*'){
        printf("%d",a*b);
    }else if(o=='/'){
        printf("%d",a/b);
    }else{
        printf("error");
    }
}