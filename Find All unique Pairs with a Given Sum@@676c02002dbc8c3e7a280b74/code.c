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
    int r=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                printf("%d %d\n",arr[i],arr[j]);
                r=1;
            }
        }
    }
    if(r==0){
        printf("%d",-1);
    }
    return 0;
}