#include <stdio.h>

struct Student{
    int Roll;
    char name[50];
    float marks;
}

int main() {
    int n;
    scanf("%d",&n);

    struct Student students[n];

    for(int i=0 ; i<n ; i++){
        scanf("%d %s %f",&students.Roll,&students.name,&students.marks);
    }

    for(int i=0;i<n;i++){
        printf("Roll Number: %d, Name: %s, Marks:%f",students[i].Roll,students[i].name,students[i].marks)
    }
}