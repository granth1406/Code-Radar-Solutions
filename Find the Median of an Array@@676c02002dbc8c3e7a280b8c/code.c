#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0; i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
        sum+=arr[i];
    }
    printf("%d",sum/size);
}