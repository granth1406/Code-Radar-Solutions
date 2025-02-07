#include <stdio.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,n);
    return 0;
}