#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    int arr[size];
    int r=0;
    for(int i=1; i<=size; i++){
        int ele;
        arr[i]=ele;
        if(arr[i-1]>arr[i]){
            printf("Not Sorted");
            break;
        }
        else{
            printf("Sorted");
        }

    }
}