#include <stdio.h>

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n-i-1;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
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
    printArray(arr,n);
    return 0;
}