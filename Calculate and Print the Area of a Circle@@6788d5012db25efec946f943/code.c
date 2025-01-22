#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    float area;
    scanf("%f",&a);
    area=3.14*a*a;
    printf("Area: %.2f",area);
}