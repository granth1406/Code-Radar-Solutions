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

    int target;
    scanf("%d",&target);

    for(int i=0;i<size;i++){
        for(int j=i+1;i<size;j++){
            if(arr[i]+arr[j]=target){
                printf("%d %d",arr[i],arr[j]);
            }
        }
    }
}