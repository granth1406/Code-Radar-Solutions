#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    printf("Average: %.2lf",(a+b+c)/3);
}