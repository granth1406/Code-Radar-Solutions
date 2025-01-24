#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    int target;
    int count=0;
    scanf("%d %d",&size,&target);
    int arr[size];
    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
        
        if(arr[i]>target){
            count++;
        }
    }
    printf("%d",count);
}