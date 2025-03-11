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
    int x,y;
    scanf("%d",&target);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                if(x==arr[i] && y==arr[j]){
                    break;
                }
                printf("%d %d\n",arr[i],arr[j]);
                x=arr[i];
                y=arr[j];
            }
            
        }
    }
    return 0;
}