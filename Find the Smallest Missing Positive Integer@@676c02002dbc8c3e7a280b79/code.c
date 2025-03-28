#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }

    for(int i=0;i<size-1;i++){
        if(arr[i]+1!=arr[i+1]){
            printf(arr[i]+1);
            return 0;
        }
    }



}