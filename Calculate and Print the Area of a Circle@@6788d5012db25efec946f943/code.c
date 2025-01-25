#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a;
    double area;
    scanf("%lf",&a);
    area=3.14*a*a;
    printf("Area: %.2lf",area);
}