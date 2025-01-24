#include <stdio.h>
int main() {
    int size;
    int arr[size];
    for(int i=0; i<size; i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    for(int i=0 ; i<size;i++){
        if(arr[i-1]>arr[i]){
            printf("Not Sorted");
            break;
        }
        else{
            printf("Sorted");
        }

    }
}