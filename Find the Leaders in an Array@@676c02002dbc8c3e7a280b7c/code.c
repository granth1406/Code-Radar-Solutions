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
    for(int i=0;i<size;i++){
        int r=1;
        for(int j=i+1;j<size;j++){
            if(arr[i]<=arr[j]){
                r=0;
            }
        }
        if(r==1){
            printf("%d ",arr[i]);
        }
    }
}