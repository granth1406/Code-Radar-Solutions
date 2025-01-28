#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int diff=100;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j] && arr[i]-arr[j]<diff){
                return {arr[i],arr[j]}
            }

        }
    }
}