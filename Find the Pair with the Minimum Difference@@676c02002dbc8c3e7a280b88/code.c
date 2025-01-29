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
    int a1,a2;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]>arr[j] && arr[i]-arr[j]<diff){
                a1=arr[i];
                a2=arr[j];
            }

        }
    }
    printf("%d %d",a1,a2);
}