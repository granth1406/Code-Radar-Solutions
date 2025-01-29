#include <stdio.h>
int main() {
    int a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    switch(o){
            case '+':
            printf("%d",a+b);
            break;
            case '-':
            printf("%d",a-b);
            break;
            case '*':
            printf("%d",a*b);
            break;
            case '/':
            printf("%d",a/b);
            if(b==0){
                printf("error");
            }else{
                printf("%.0lf",a/b);
            }
            break;
        
    }
    return 0;
}