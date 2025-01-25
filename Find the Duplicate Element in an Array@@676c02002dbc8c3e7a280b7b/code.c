#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    int ans=0;

    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }

    for(int val : arr){
        ans^=val;
    }
    printf("%d",ans);

}