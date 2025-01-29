#include <stdio.h>
int main() {
    double a,b;
    char o;
    scanf("%d %d %c",&a,&b,&o);
    switch(o){
            case '+':
            printf("%.0lf",a+b);
            break;
            case '-':
            printf("%.0lf",a-b);
            break;
            case '*':
            printf("%.0lf",a*b);
            break;
            case '/':
            printf("%.0lf",a/b);
            if(b==0){
                printf("error");
            }else{
                printf("%.0lf",a/b);
            }
            break;
        
    }
    return 0;
}